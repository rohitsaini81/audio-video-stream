#include "../media-stream/chat_client.h"

#include <arpa/inet.h>
#include <errno.h>
#include <fcntl.h>
#include <netinet/in.h>
#include <signal.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

#include <algorithm>
#include <chrono>
#include <cctype>
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <mutex>
#include <optional>
#include <sstream>
#include <string>
#include <thread>

namespace {
constexpr int kSeekStepSeconds = 10;
constexpr uint32_t kStatusSendIntervalMs = 1000;
constexpr uint32_t kSeekActionIntervalMs = 120;
constexpr uint32_t kRemoteSeekApplyIntervalMs = 120;
constexpr double kSeekActionMinDeltaSeconds = 0.20;
constexpr double kSyncDriftThresholdSeconds = 0.50;

struct SyncStateSnapshot {
  std::string file_name;
  std::string state;
  bool paused = false;
  int64_t sent_epoch_ms = 0;
  int64_t playhead_ms = 0;
};

struct PendingRemoteSync {
  SyncStateSnapshot snapshot;
};

struct LocalCommandState {
  std::mutex mutex;
  bool quit_requested = false;
  bool toggle_pause = false;
  int seek_delta_seconds = 0;
  std::optional<double> absolute_seek_seconds;
};

std::string basename_of(const std::string& path) {
  size_t pos = path.find_last_of("/\\");
  if (pos == std::string::npos) return path;
  return path.substr(pos + 1);
}

std::optional<std::string> get_kv_value(const std::string& line, const std::string& key) {
  std::string token = key + "=";
  size_t begin = line.find(token);
  if (begin == std::string::npos) return std::nullopt;
  begin += token.size();
  size_t end = line.find_first_of(" \r\n", begin);
  if (end == std::string::npos) end = line.size();
  return line.substr(begin, end - begin);
}

std::optional<SyncStateSnapshot> parse_sync_line(const std::string& line) {
  if (line.find("[VIDEO_STATUS]") == std::string::npos) return std::nullopt;

  auto file_name = get_kv_value(line, "file_name");
  auto state = get_kv_value(line, "state");
  auto paused = get_kv_value(line, "paused");
  auto sent_epoch_ms = get_kv_value(line, "sent_epoch_ms");
  auto playhead_ms = get_kv_value(line, "playhead_ms");
  if (!file_name || !state || !paused || !sent_epoch_ms || !playhead_ms) return std::nullopt;

  SyncStateSnapshot snapshot;
  snapshot.file_name = *file_name;
  snapshot.state = *state;
  snapshot.paused = (*paused == "yes");
  try {
    snapshot.sent_epoch_ms = std::stoll(*sent_epoch_ms);
    snapshot.playhead_ms = std::stoll(*playhead_ms);
  } catch (...) {
    return std::nullopt;
  }
  return snapshot;
}

int64_t now_epoch_ms() {
  using namespace std::chrono;
  return duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
}

std::string format_seconds(double total_seconds) {
  int seconds = std::max(0, static_cast<int>(total_seconds));
  int h = seconds / 3600;
  int m = (seconds % 3600) / 60;
  int s = seconds % 60;
  std::ostringstream out;
  if (h > 0) {
    out << h << ":" << std::setw(2) << std::setfill('0') << m << ":" << std::setw(2)
        << std::setfill('0') << s;
  } else {
    out << m << ":" << std::setw(2) << std::setfill('0') << s;
  }
  return out.str();
}

std::string build_status_payload(const std::string& video_file_name, int64_t current_ms,
                                 int64_t duration_ms, bool paused, bool eof,
                                 const std::string& state_tag) {
  double current_seconds = std::max(0.0, static_cast<double>(current_ms) / 1000.0);
  double duration_seconds = std::max(0.0, static_cast<double>(duration_ms) / 1000.0);
  double progress = 0.0;
  if (duration_seconds > 0.0) {
    progress = std::clamp((current_seconds / duration_seconds) * 100.0, 0.0, 100.0);
  }
  double remaining = std::max(0.0, duration_seconds - current_seconds);

  int64_t sent_ms = now_epoch_ms();
  int64_t playhead_ms = std::max<int64_t>(0, current_ms);
  int64_t safe_duration_ms = std::max<int64_t>(0, duration_ms);
  int64_t remaining_ms = std::max<int64_t>(0, safe_duration_ms - playhead_ms);
  int64_t sync_anchor_epoch_ms = sent_ms - playhead_ms;

  std::ostringstream out;
  out << "[VIDEO_STATUS]"
      << " file_name=" << video_file_name << " elapsed=" << format_seconds(current_seconds)
      << " remaining=" << format_seconds(remaining)
      << " total=" << format_seconds(duration_seconds) << " progress=" << std::fixed
      << std::setprecision(2) << progress << "%"
      << " fps=" << std::setprecision(2) << 0.0 << " paused=" << (paused ? "yes" : "no")
      << " eof=" << (eof ? "yes" : "no") << " window=" << "managed-by-vlc"
      << " state=" << state_tag << " sent_epoch_ms=" << sent_ms << " sync_anchor_epoch_ms="
      << sync_anchor_epoch_ms << " playhead_ms=" << playhead_ms << " duration_ms=" << safe_duration_ms
      << " remaining_ms=" << remaining_ms << " frame_index=" << 0 << " decoded_frames=" << 0
      << " pts=" << 0;
  return out.str();
}

std::optional<int64_t> parse_last_int(const std::string& text) {
  std::optional<int64_t> last;
  size_t i = 0;
  while (i < text.size()) {
    bool neg = false;
    if (text[i] == '-') {
      neg = true;
      ++i;
    }
    if (i >= text.size() || !std::isdigit(static_cast<unsigned char>(text[i]))) {
      ++i;
      continue;
    }
    int64_t v = 0;
    while (i < text.size() && std::isdigit(static_cast<unsigned char>(text[i]))) {
      v = v * 10 + (text[i] - '0');
      ++i;
    }
    last = neg ? -v : v;
  }
  return last;
}

class RcClient {
 public:
  bool Connect(const std::string& host, int port, int retries = 80, int delay_ms = 100) {
    for (int i = 0; i < retries; ++i) {
      int fd = socket(AF_INET, SOCK_STREAM, 0);
      if (fd < 0) return false;

      sockaddr_in addr{};
      addr.sin_family = AF_INET;
      addr.sin_port = htons(static_cast<uint16_t>(port));
      if (inet_pton(AF_INET, host.c_str(), &addr.sin_addr) <= 0) {
        close(fd);
        return false;
      }

      if (connect(fd, reinterpret_cast<sockaddr*>(&addr), sizeof(addr)) == 0) {
        fd_ = fd;
        int flags = fcntl(fd_, F_GETFL, 0);
        if (flags >= 0) fcntl(fd_, F_SETFL, flags | O_NONBLOCK);
        Drain();
        return true;
      }
      close(fd);
      std::this_thread::sleep_for(std::chrono::milliseconds(delay_ms));
    }
    return false;
  }

  void Disconnect() {
    if (fd_ >= 0) {
      close(fd_);
      fd_ = -1;
    }
  }

  bool Send(const std::string& cmd) {
    if (fd_ < 0) return false;
    std::string line = cmd;
    if (line.empty() || line.back() != '\n') line.push_back('\n');
    ssize_t n = send(fd_, line.c_str(), line.size(), 0);
    return n == static_cast<ssize_t>(line.size());
  }

  std::optional<int64_t> QueryInt(const std::string& cmd, int timeout_ms = 250) {
    if (!Send(cmd)) return std::nullopt;
    auto deadline = std::chrono::steady_clock::now() + std::chrono::milliseconds(timeout_ms);
    std::string received;
    while (std::chrono::steady_clock::now() < deadline) {
      std::string chunk = ReadChunk();
      if (!chunk.empty()) {
        received += chunk;
        auto maybe = parse_last_int(received);
        if (maybe.has_value()) return maybe;
      }
      std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }
    return parse_last_int(received);
  }

 private:
  void Drain() {
    for (;;) {
      std::string chunk = ReadChunk();
      if (chunk.empty()) break;
    }
  }

  std::string ReadChunk() {
    if (fd_ < 0) return "";
    char buf[4096];
    ssize_t n = recv(fd_, buf, sizeof(buf) - 1, 0);
    if (n <= 0) return "";
    return std::string(buf, static_cast<size_t>(n));
  }

  int fd_ = -1;
};

void command_input_loop(LocalCommandState* state) {
  std::cerr << "Commands: p|space(toggle pause), left|back, right|fwd, seek <seconds>, q(quit)\n";
  std::string line;
  while (std::getline(std::cin, line)) {
    std::lock_guard<std::mutex> lock(state->mutex);
    if (line == "q" || line == "quit" || line == "exit") {
      state->quit_requested = true;
      return;
    }
    if (line == "p" || line == "pause" || line == "space" || line == "play") {
      state->toggle_pause = true;
      continue;
    }
    if (line == "left" || line == "back" || line == "-10") {
      state->seek_delta_seconds -= kSeekStepSeconds;
      continue;
    }
    if (line == "right" || line == "fwd" || line == "+10") {
      state->seek_delta_seconds += kSeekStepSeconds;
      continue;
    }
    if (line.rfind("seek ", 0) == 0) {
      try {
        state->absolute_seek_seconds = std::stod(line.substr(5));
      } catch (...) {
        std::cerr << "Invalid seek command: " << line << "\n";
      }
    }
  }
}
}  // namespace

int main(int argc, char* argv[]) {
  if (argc < 2) {
    std::cerr << "Usage: " << argv[0] << " <video_path> [sync_server_ip] [sync_server_port]\n";
    return 1;
  }

  const std::string video_path = argv[1];
  const std::string video_file_name = basename_of(video_path);
  const std::string sync_server_ip = (argc > 2) ? argv[2] : "127.0.0.1";
  int sync_server_port = 54000;
  if (argc > 3) sync_server_port = std::stoi(argv[3]);

  int rc_port = 42000 + static_cast<int>(::getpid() % 2000);
  std::string rc_host_arg = "--rc-host=127.0.0.1:" + std::to_string(rc_port);

  pid_t vlc_pid = fork();
  if (vlc_pid < 0) {
    std::cerr << "Failed to fork VLC process\n";
    return 1;
  }
  if (vlc_pid == 0) {
    execl("./vlc", "./vlc", "--intf=qt", "--extraintf=rc", rc_host_arg.c_str(),
          "--no-video-title-show", video_path.c_str(), static_cast<char*>(nullptr));
    _exit(127);
  }

  RcClient rc;
  if (!rc.Connect("127.0.0.1", rc_port)) {
    std::cerr << "Failed to connect to VLC RC interface on port " << rc_port << "\n";
    kill(vlc_pid, SIGTERM);
    waitpid(vlc_pid, nullptr, 0);
    return 1;
  }

  std::string receiver_buffer;
  std::mutex pending_sync_mutex;
  std::optional<PendingRemoteSync> pending_sync;
  int64_t last_applied_remote_sent_epoch_ms = 0;

  ChatClient status_client;
  bool status_connected = status_client.Connect(sync_server_ip, sync_server_port);
  if (!status_connected) {
    std::cerr << "Warning: failed to connect status stream to " << sync_server_ip << ":"
              << sync_server_port << "\n";
  } else {
    status_client.StartReceiver([&](const std::string& chunk) {
      receiver_buffer.append(chunk);
      if (receiver_buffer.size() > 1024 * 1024) receiver_buffer.clear();

      size_t line_end = 0;
      while ((line_end = receiver_buffer.find('\n')) != std::string::npos) {
        std::string line = receiver_buffer.substr(0, line_end);
        receiver_buffer.erase(0, line_end + 1);
        auto parsed = parse_sync_line(line);
        if (!parsed) continue;
        if (parsed->file_name != video_file_name || parsed->sent_epoch_ms <= 0) continue;
        PendingRemoteSync next{*parsed};
        std::lock_guard<std::mutex> lock(pending_sync_mutex);
        pending_sync = next;
      }
    });
  }

  LocalCommandState command_state;
  std::thread command_thread(command_input_loop, &command_state);

  auto ticks_ms = []() -> uint32_t {
    using namespace std::chrono;
    return static_cast<uint32_t>(
        duration_cast<milliseconds>(steady_clock::now().time_since_epoch()).count() & 0xFFFFFFFFu);
  };

  auto current_ms = [&]() -> int64_t { return rc.QueryInt("get_time").value_or(0) * 1000; };
  auto duration_ms = [&]() -> int64_t { return rc.QueryInt("get_length").value_or(0) * 1000; };
  auto is_playing = [&]() -> bool { return rc.QueryInt("is_playing").value_or(0) != 0; };

  bool running = true;
  bool paused = false;
  bool eof = false;
  bool send_status_now = true;
  std::string status_state = "playing";
  uint32_t last_status_sent_ms = 0;
  uint32_t last_seek_action_ms = 0;
  uint32_t last_remote_seek_applied_ms = 0;

  auto perform_seek_action = [&](double target_seconds, bool force) -> bool {
    uint32_t now = ticks_ms();
    double cur = static_cast<double>(current_ms()) / 1000.0;
    double delta = std::abs(cur - target_seconds);
    if (!force) {
      if (now - last_seek_action_ms < kSeekActionIntervalMs) return false;
      if (delta < kSeekActionMinDeltaSeconds) return false;
    }
    double dur = static_cast<double>(duration_ms()) / 1000.0;
    if (dur > 0.0) target_seconds = std::clamp(target_seconds, 0.0, dur);
    else target_seconds = std::max(0.0, target_seconds);
    int target_sec_i = static_cast<int>(target_seconds);
    if (rc.Send("seek " + std::to_string(target_sec_i))) {
      last_seek_action_ms = now;
      status_state = "seeking";
      send_status_now = true;
      return true;
    }
    return false;
  };

  while (running) {
    int status = 0;
    pid_t wp = waitpid(vlc_pid, &status, WNOHANG);
    if (wp == vlc_pid) {
      eof = true;
      status_state = "closed";
      running = false;
    }

    bool currently_playing = is_playing();
    paused = !currently_playing;

    int seek_delta = 0;
    bool toggle_pause = false;
    bool quit_requested = false;
    std::optional<double> absolute_seek;
    {
      std::lock_guard<std::mutex> lock(command_state.mutex);
      seek_delta = command_state.seek_delta_seconds;
      command_state.seek_delta_seconds = 0;
      toggle_pause = command_state.toggle_pause;
      command_state.toggle_pause = false;
      quit_requested = command_state.quit_requested;
      if (command_state.absolute_seek_seconds.has_value()) {
        absolute_seek = command_state.absolute_seek_seconds;
        command_state.absolute_seek_seconds.reset();
      }
    }

    if (quit_requested) {
      rc.Send("quit");
      running = false;
      status_state = "closed";
    }

    if (toggle_pause) {
      if (currently_playing) rc.Send("pause");
      else rc.Send("play");
      send_status_now = true;
    }

    if (absolute_seek.has_value()) {
      perform_seek_action(*absolute_seek, true);
    } else if (seek_delta != 0) {
      double cur_sec = static_cast<double>(current_ms()) / 1000.0;
      perform_seek_action(cur_sec + static_cast<double>(seek_delta), true);
    }

    {
      std::optional<PendingRemoteSync> remote_update;
      {
        std::lock_guard<std::mutex> lock(pending_sync_mutex);
        if (pending_sync.has_value()) {
          remote_update = pending_sync;
          pending_sync.reset();
        }
      }

      if (remote_update.has_value()) {
        const SyncStateSnapshot& snap = remote_update->snapshot;
        if (snap.sent_epoch_ms > last_applied_remote_sent_epoch_ms) {
          double target_seconds = std::max(0.0, static_cast<double>(snap.playhead_ms) / 1000.0);
          if (!snap.paused) {
            int64_t drift_ms = std::max<int64_t>(0, now_epoch_ms() - snap.sent_epoch_ms);
            target_seconds += static_cast<double>(drift_ms) / 1000.0;
          }

          double dur = static_cast<double>(duration_ms()) / 1000.0;
          if (dur > 0.0) target_seconds = std::clamp(target_seconds, 0.0, dur);

          double cur_sec = static_cast<double>(current_ms()) / 1000.0;
          bool should_seek = (snap.state == "seeking");
          double drift = std::abs(cur_sec - target_seconds);
          uint32_t now = ticks_ms();
          if (should_seek && drift < kSeekActionMinDeltaSeconds) should_seek = false;
          if (should_seek && now - last_remote_seek_applied_ms < kRemoteSeekApplyIntervalMs)
            should_seek = false;
          if (!should_seek && drift >= kSyncDriftThresholdSeconds) should_seek = true;

          bool local_paused = !is_playing();
          bool pause_changed = (local_paused != snap.paused);
          if (should_seek && perform_seek_action(target_seconds, true)) {
            last_remote_seek_applied_ms = now;
          }
          if (pause_changed) {
            if (snap.paused && !local_paused) rc.Send("pause");
            if (!snap.paused && local_paused) rc.Send("play");
          }
          if (should_seek || pause_changed) {
            status_state = snap.paused ? "paused" : "playing";
            send_status_now = true;
          }
          last_applied_remote_sent_epoch_ms = snap.sent_epoch_ms;
        }
      }
    }

    if (!paused && status_state != "seeking" && !eof) status_state = "playing";
    if (eof) status_state = "eof";

    uint32_t now = ticks_ms();
    if (status_connected &&
        (send_status_now || now - last_status_sent_ms >= kStatusSendIntervalMs)) {
      int64_t cur = current_ms();
      int64_t dur = duration_ms();
      paused = !is_playing();
      std::string payload =
          build_status_payload(video_file_name, cur, dur, paused, eof, status_state);
      if (!status_client.SendLine(payload)) {
        status_connected = false;
        std::cerr << "Warning: status stream disconnected from media-stream server\n";
      }
      last_status_sent_ms = now;
      send_status_now = false;
      if (status_state == "seeking") status_state = paused ? "paused" : "playing";
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(80));
  }

  if (status_connected) {
    int64_t cur = current_ms();
    int64_t dur = duration_ms();
    bool local_paused = !is_playing();
    status_client.SendLine(build_status_payload(video_file_name, cur, dur, local_paused, true, "closed"));
  }
  status_client.Disconnect();
  rc.Disconnect();

  if (command_thread.joinable()) command_thread.join();

  int status = 0;
  pid_t done = waitpid(vlc_pid, &status, WNOHANG);
  if (done == 0) {
    kill(vlc_pid, SIGTERM);
    waitpid(vlc_pid, nullptr, 0);
  }
  return 0;
}
