#include "../media-stream/chat_client.h"

#include <vlc/vlc.h>

#include <algorithm>
#include <atomic>
#include <chrono>
#include <cmath>
#include <cstdint>
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
  if (pos == std::string::npos) {
    return path;
  }
  return path.substr(pos + 1);
}

std::optional<std::string> get_kv_value(const std::string& line, const std::string& key) {
  std::string token = key + "=";
  size_t begin = line.find(token);
  if (begin == std::string::npos) {
    return std::nullopt;
  }
  begin += token.size();
  size_t end = line.find_first_of(" \r\n", begin);
  if (end == std::string::npos) {
    end = line.size();
  }
  return line.substr(begin, end - begin);
}

std::optional<SyncStateSnapshot> parse_sync_line(const std::string& line) {
  if (line.find("[VIDEO_STATUS]") == std::string::npos) {
    return std::nullopt;
  }

  auto file_name = get_kv_value(line, "file_name");
  auto state = get_kv_value(line, "state");
  auto paused = get_kv_value(line, "paused");
  auto sent_epoch_ms = get_kv_value(line, "sent_epoch_ms");
  auto playhead_ms = get_kv_value(line, "playhead_ms");
  if (!file_name || !state || !paused || !sent_epoch_ms || !playhead_ms) {
    return std::nullopt;
  }

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

int64_t now_epoch_ms() {
  using namespace std::chrono;
  return duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
}

double safe_seconds_from_ms(int64_t ms) {
  return std::max(0.0, static_cast<double>(ms) / 1000.0);
}

std::string build_status_payload(const std::string& video_file_name, int64_t current_ms,
                                 int64_t duration_ms, bool paused, bool eof,
                                 const std::string& state_tag) {
  double current_seconds = safe_seconds_from_ms(current_ms);
  double duration_seconds = safe_seconds_from_ms(duration_ms);
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
      << " eof=" << (eof ? "yes" : "no") << " window=" << "n/a"
      << " state=" << state_tag << " sent_epoch_ms=" << sent_ms << " sync_anchor_epoch_ms="
      << sync_anchor_epoch_ms << " playhead_ms=" << playhead_ms << " duration_ms=" << safe_duration_ms
      << " remaining_ms=" << remaining_ms << " frame_index=" << 0 << " decoded_frames=" << 0
      << " pts=" << 0;
  return out.str();
}

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
        double seconds = std::stod(line.substr(5));
        state->absolute_seek_seconds = seconds;
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
  if (argc > 3) {
    sync_server_port = std::stoi(argv[3]);
  }

  const char* vlc_args[] = {"--intf=dummy"};
  libvlc_instance_t* vlc = libvlc_new(1, vlc_args);
  if (!vlc) {
    std::cerr << "Failed to initialize libVLC\n";
    return 1;
  }

  libvlc_media_t* media = libvlc_media_new_path(video_path.c_str());
  if (!media) {
    std::cerr << "Failed to create media from path: " << video_path << "\n";
    libvlc_release(vlc);
    return 1;
  }

  libvlc_media_player_t* mp = libvlc_media_player_new_from_media(vlc, media);
  libvlc_media_release(media);
  if (!mp) {
    std::cerr << "Failed to create media player\n";
    libvlc_release(vlc);
    return 1;
  }

  if (libvlc_media_player_play(mp) != 0) {
    std::cerr << "Failed to start playback\n";
    libvlc_media_player_release(mp);
    libvlc_release(vlc);
    return 1;
  }

  bool running = true;
  bool paused = false;
  bool eof = false;
  bool send_status_now = true;
  std::string status_state = "playing";
  uint32_t last_status_sent_ms = 0;
  uint32_t last_seek_action_ms = 0;
  uint32_t last_remote_seek_applied_ms = 0;
  int64_t last_applied_remote_sent_epoch_ms = 0;
  std::mutex pending_sync_mutex;
  std::optional<PendingRemoteSync> pending_sync;
  std::string receiver_buffer;

  ChatClient status_client;
  bool status_connected = status_client.Connect(sync_server_ip, sync_server_port);
  if (!status_connected) {
    std::cerr << "Warning: failed to connect status stream to " << sync_server_ip << ":"
              << sync_server_port << "\n";
  } else {
    status_client.StartReceiver([&](const std::string& chunk) {
      receiver_buffer.append(chunk);
      if (receiver_buffer.size() > 1024 * 1024) {
        receiver_buffer.clear();
      }

      size_t line_end = 0;
      while ((line_end = receiver_buffer.find('\n')) != std::string::npos) {
        std::string line = receiver_buffer.substr(0, line_end);
        receiver_buffer.erase(0, line_end + 1);

        auto parsed = parse_sync_line(line);
        if (!parsed) {
          continue;
        }
        if (parsed->file_name != video_file_name || parsed->sent_epoch_ms <= 0) {
          continue;
        }

        PendingRemoteSync next;
        next.snapshot = *parsed;
        std::lock_guard<std::mutex> lock(pending_sync_mutex);
        pending_sync = next;
      }
    });
  }

  LocalCommandState command_state;
  std::thread command_thread(command_input_loop, &command_state);

  auto get_ticks_ms = []() -> uint32_t {
    using namespace std::chrono;
    return static_cast<uint32_t>(
        duration_cast<milliseconds>(steady_clock::now().time_since_epoch()).count() &
        0xFFFFFFFFu);
  };

  auto current_seconds = [&]() -> double {
    return safe_seconds_from_ms(libvlc_media_player_get_time(mp));
  };

  auto duration_seconds = [&]() -> double {
    return safe_seconds_from_ms(libvlc_media_player_get_length(mp));
  };

  auto perform_seek_action = [&](double target_seconds, bool force) {
    uint32_t now_ms = get_ticks_ms();
    double delta = std::abs(current_seconds() - target_seconds);
    if (!force) {
      if (now_ms - last_seek_action_ms < kSeekActionIntervalMs) {
        return false;
      }
      if (delta < kSeekActionMinDeltaSeconds) {
        return false;
      }
    }

    double dur = duration_seconds();
    if (dur > 0.0) {
      target_seconds = std::clamp(target_seconds, 0.0, dur);
    } else {
      target_seconds = std::max(0.0, target_seconds);
    }

    int64_t target_ms = static_cast<int64_t>(target_seconds * 1000.0);
    if (libvlc_media_player_set_time(mp, target_ms, false) == 0) {
      last_seek_action_ms = now_ms;
      status_state = "seeking";
      send_status_now = true;
      return true;
    }
    return false;
  };

  while (running) {
    libvlc_state_t st = libvlc_media_player_get_state(mp);
    int64_t len_ms = libvlc_media_player_get_length(mp);
    int64_t cur_ms = libvlc_media_player_get_time(mp);
    eof = (st == libvlc_Stopped && len_ms > 0 && cur_ms >= len_ms - 300);
    if (st == libvlc_Error) {
      status_state = "error";
      running = false;
    } else if (eof) {
      status_state = "eof";
      running = false;
    }

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
      running = false;
      status_state = "closed";
    }

    if (toggle_pause) {
      paused = !paused;
      libvlc_media_player_set_pause(mp, paused ? 1 : 0);
      status_state = paused ? "paused" : "playing";
      send_status_now = true;
    }

    if (absolute_seek.has_value()) {
      perform_seek_action(*absolute_seek, true);
    } else if (seek_delta != 0) {
      perform_seek_action(current_seconds() + static_cast<double>(seek_delta), true);
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
            int64_t now_ms = now_epoch_ms();
            int64_t drift_ms = std::max<int64_t>(0, now_ms - snap.sent_epoch_ms);
            target_seconds += static_cast<double>(drift_ms) / 1000.0;
          }

          double dur = duration_seconds();
          if (dur > 0.0) {
            target_seconds = std::clamp(target_seconds, 0.0, dur);
          }

          bool should_seek = (snap.state == "seeking");
          double drift = std::abs(current_seconds() - target_seconds);
          uint32_t now_ms = get_ticks_ms();
          if (should_seek && drift < kSeekActionMinDeltaSeconds) {
            should_seek = false;
          }
          if (should_seek && now_ms - last_remote_seek_applied_ms < kRemoteSeekApplyIntervalMs) {
            should_seek = false;
          }
          if (!should_seek && drift >= kSyncDriftThresholdSeconds) {
            should_seek = true;
          }

          bool pause_changed = (paused != snap.paused);
          if (should_seek && perform_seek_action(target_seconds, true)) {
            last_remote_seek_applied_ms = now_ms;
          }
          if (pause_changed) {
            paused = snap.paused;
            libvlc_media_player_set_pause(mp, paused ? 1 : 0);
          }

          if (should_seek || pause_changed) {
            status_state = snap.paused ? "paused" : "playing";
            send_status_now = true;
          }
          last_applied_remote_sent_epoch_ms = snap.sent_epoch_ms;
        }
      }
    }

    if (!paused && status_state != "seeking" && !eof) {
      status_state = "playing";
    }

    uint32_t now_ms = get_ticks_ms();
    if (status_connected &&
        (send_status_now || now_ms - last_status_sent_ms >= kStatusSendIntervalMs)) {
      int64_t time_ms = libvlc_media_player_get_time(mp);
      int64_t len_ms = libvlc_media_player_get_length(mp);
      std::string payload =
          build_status_payload(video_file_name, time_ms, len_ms, paused, eof, status_state);
      if (!status_client.SendLine(payload)) {
        status_connected = false;
        std::cerr << "Warning: status stream disconnected from media-stream server\n";
      }
      last_status_sent_ms = now_ms;
      send_status_now = false;
      if (status_state == "seeking") {
        status_state = paused ? "paused" : "playing";
      }
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(50));
  }

  if (status_connected) {
    int64_t time_ms = libvlc_media_player_get_time(mp);
    int64_t len_ms = libvlc_media_player_get_length(mp);
    status_client.SendLine(
        build_status_payload(video_file_name, time_ms, len_ms, paused, eof, "closed"));
  }
  status_client.Disconnect();

  libvlc_media_player_stop_async(mp);
  libvlc_media_player_release(mp);
  libvlc_release(vlc);

  {
    std::lock_guard<std::mutex> lock(command_state.mutex);
    command_state.quit_requested = true;
  }
  if (command_thread.joinable()) {
    command_thread.join();
  }
  return 0;
}
