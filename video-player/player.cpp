#include <SDL2/SDL.h>
#include "../media-stream/chat_client.h"

extern "C" {
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libavutil/imgutils.h>
#include <libswscale/swscale.h>
}

#include <algorithm>
#include <chrono>
#include <cstdint>
#include <iomanip>
#include <iostream>
#include <mutex>
#include <optional>
#include <sstream>
#include <string>

namespace {
constexpr int kControlHeight = 90;
constexpr int kButtonWidth = 80;
constexpr int kButtonHeight = 42;
constexpr int kSeekStepSeconds = 10;
constexpr int kSeekToleranceFrames = 300;
constexpr Uint32 kStatusSendIntervalMs = 1000;
constexpr double kSyncDriftThresholdSeconds = 0.50;

struct PlayerContext {
  AVFormatContext* format_ctx = nullptr;
  AVCodecContext* codec_ctx = nullptr;
  const AVCodec* codec = nullptr;
  SwsContext* sws_ctx = nullptr;
  AVFrame* frame = nullptr;
  AVFrame* rgb_frame = nullptr;
  AVPacket* packet = nullptr;
  uint8_t* rgb_buffer = nullptr;
  int video_stream_index = -1;
  double fps = 30.0;
  double duration_seconds = 0.0;
  double current_seconds = 0.0;
  int64_t current_pts = AV_NOPTS_VALUE;
  uint64_t decoded_frames = 0;
  bool eof = false;
};

struct UiLayout {
  SDL_Rect video_dst;
  SDL_Rect controls;
  SDL_Rect back_btn;
  SDL_Rect fwd_btn;
  SDL_Rect seek_bar;
};

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

double frame_seconds(const PlayerContext& ctx) {
  int64_t ts = ctx.frame->best_effort_timestamp;
  if (ts == AV_NOPTS_VALUE) {
    ts = ctx.frame->pts;
  }
  if (ts == AV_NOPTS_VALUE) {
    return ctx.current_seconds;
  }
  AVRational tb = ctx.format_ctx->streams[ctx.video_stream_index]->time_base;
  return ts * av_q2d(tb);
}

bool init_ffmpeg(PlayerContext& ctx, const std::string& path) {
  if (avformat_open_input(&ctx.format_ctx, path.c_str(), nullptr, nullptr) < 0) {
    std::cerr << "Failed to open file: " << path << "\n";
    return false;
  }
  if (avformat_find_stream_info(ctx.format_ctx, nullptr) < 0) {
    std::cerr << "Failed to read stream info.\n";
    return false;
  }

  for (unsigned int i = 0; i < ctx.format_ctx->nb_streams; ++i) {
    if (ctx.format_ctx->streams[i]->codecpar->codec_type == AVMEDIA_TYPE_VIDEO) {
      ctx.video_stream_index = static_cast<int>(i);
      break;
    }
  }
  if (ctx.video_stream_index < 0) {
    std::cerr << "No video stream found.\n";
    return false;
  }

  AVStream* stream = ctx.format_ctx->streams[ctx.video_stream_index];
  ctx.codec = avcodec_find_decoder(stream->codecpar->codec_id);
  if (!ctx.codec) {
    std::cerr << "Unsupported codec.\n";
    return false;
  }

  ctx.codec_ctx = avcodec_alloc_context3(ctx.codec);
  if (!ctx.codec_ctx) {
    std::cerr << "Failed to allocate codec context.\n";
    return false;
  }
  if (avcodec_parameters_to_context(ctx.codec_ctx, stream->codecpar) < 0) {
    std::cerr << "Failed to copy codec params.\n";
    return false;
  }
  if (avcodec_open2(ctx.codec_ctx, ctx.codec, nullptr) < 0) {
    std::cerr << "Failed to open codec.\n";
    return false;
  }

  AVRational fr = stream->avg_frame_rate.num > 0 ? stream->avg_frame_rate : stream->r_frame_rate;
  if (fr.num > 0 && fr.den > 0) {
    ctx.fps = av_q2d(fr);
  }

  if (stream->duration > 0) {
    ctx.duration_seconds = stream->duration * av_q2d(stream->time_base);
  } else if (ctx.format_ctx->duration > 0) {
    ctx.duration_seconds = static_cast<double>(ctx.format_ctx->duration) / AV_TIME_BASE;
  }

  ctx.frame = av_frame_alloc();
  ctx.rgb_frame = av_frame_alloc();
  ctx.packet = av_packet_alloc();
  if (!ctx.frame || !ctx.rgb_frame || !ctx.packet) {
    std::cerr << "Failed to allocate frame/packet.\n";
    return false;
  }

  int w = ctx.codec_ctx->width;
  int h = ctx.codec_ctx->height;
  int rgb_size = av_image_get_buffer_size(AV_PIX_FMT_RGB24, w, h, 1);
  if (rgb_size < 0) {
    std::cerr << "Failed to compute RGB buffer size.\n";
    return false;
  }

  ctx.rgb_buffer = static_cast<uint8_t*>(av_malloc(static_cast<size_t>(rgb_size)));
  if (!ctx.rgb_buffer) {
    std::cerr << "Failed to allocate RGB buffer.\n";
    return false;
  }

  if (av_image_fill_arrays(ctx.rgb_frame->data, ctx.rgb_frame->linesize, ctx.rgb_buffer,
                           AV_PIX_FMT_RGB24, w, h, 1) < 0) {
    std::cerr << "Failed to set RGB frame data.\n";
    return false;
  }

  ctx.sws_ctx = sws_getContext(w, h, ctx.codec_ctx->pix_fmt, w, h, AV_PIX_FMT_RGB24, SWS_BILINEAR,
                               nullptr, nullptr, nullptr);
  if (!ctx.sws_ctx) {
    std::cerr << "Failed to init scaler.\n";
    return false;
  }

  return true;
}

void free_ffmpeg(PlayerContext& ctx) {
  if (ctx.packet) av_packet_free(&ctx.packet);
  if (ctx.frame) av_frame_free(&ctx.frame);
  if (ctx.rgb_frame) av_frame_free(&ctx.rgb_frame);
  if (ctx.sws_ctx) sws_freeContext(ctx.sws_ctx);
  if (ctx.rgb_buffer) av_free(ctx.rgb_buffer);
  if (ctx.codec_ctx) avcodec_free_context(&ctx.codec_ctx);
  if (ctx.format_ctx) avformat_close_input(&ctx.format_ctx);
}

bool decode_one_frame(PlayerContext& ctx) {
  while (true) {
    int read_status = av_read_frame(ctx.format_ctx, ctx.packet);
    if (read_status < 0) {
      ctx.eof = true;
      return false;
    }

    if (ctx.packet->stream_index != ctx.video_stream_index) {
      av_packet_unref(ctx.packet);
      continue;
    }

    if (avcodec_send_packet(ctx.codec_ctx, ctx.packet) < 0) {
      av_packet_unref(ctx.packet);
      continue;
    }
    av_packet_unref(ctx.packet);

    int receive_status = avcodec_receive_frame(ctx.codec_ctx, ctx.frame);
    if (receive_status == AVERROR(EAGAIN)) {
      continue;
    }
    if (receive_status < 0) {
      return false;
    }

    sws_scale(ctx.sws_ctx, ctx.frame->data, ctx.frame->linesize, 0, ctx.codec_ctx->height,
              ctx.rgb_frame->data, ctx.rgb_frame->linesize);

    ctx.current_pts = (ctx.frame->best_effort_timestamp != AV_NOPTS_VALUE) ? ctx.frame->best_effort_timestamp
                                                                            : ctx.frame->pts;
    ctx.current_seconds = frame_seconds(ctx);
    if (ctx.duration_seconds > 0.0) {
      ctx.current_seconds = std::clamp(ctx.current_seconds, 0.0, ctx.duration_seconds);
    }
    ++ctx.decoded_frames;

    return true;
  }
}

bool seek_to(PlayerContext& ctx, double target_seconds) {
  if (ctx.duration_seconds > 0.0) {
    target_seconds = std::clamp(target_seconds, 0.0, ctx.duration_seconds);
  } else {
    target_seconds = std::max(0.0, target_seconds);
  }

  AVStream* stream = ctx.format_ctx->streams[ctx.video_stream_index];
  int64_t target_ts = static_cast<int64_t>(target_seconds / av_q2d(stream->time_base));

  int seek_res = avformat_seek_file(ctx.format_ctx, ctx.video_stream_index, INT64_MIN, target_ts,
                                    INT64_MAX, AVSEEK_FLAG_BACKWARD);
  if (seek_res < 0) {
    seek_res = av_seek_frame(ctx.format_ctx, ctx.video_stream_index, target_ts, AVSEEK_FLAG_BACKWARD);
    if (seek_res < 0) {
      return false;
    }
  }

  avcodec_flush_buffers(ctx.codec_ctx);
  ctx.eof = false;

  for (int i = 0; i < kSeekToleranceFrames; ++i) {
    if (!decode_one_frame(ctx)) {
      return true;
    }
    if (ctx.current_seconds >= target_seconds || ctx.duration_seconds <= 0.0) {
      return true;
    }
  }

  return true;
}

UiLayout compute_layout(int win_w, int win_h, int src_w, int src_h) {
  UiLayout layout{};
  int control_h = std::min(kControlHeight, std::max(70, win_h / 5));
  layout.controls = {0, win_h - control_h, win_w, control_h};

  int video_area_h = std::max(1, win_h - control_h);
  double scale_x = static_cast<double>(win_w) / static_cast<double>(src_w);
  double scale_y = static_cast<double>(video_area_h) / static_cast<double>(src_h);
  double scale = std::max(0.01, std::min(scale_x, scale_y));

  int draw_w = std::max(1, static_cast<int>(src_w * scale));
  int draw_h = std::max(1, static_cast<int>(src_h * scale));
  int draw_x = (win_w - draw_w) / 2;
  int draw_y = (video_area_h - draw_h) / 2;
  layout.video_dst = {draw_x, draw_y, draw_w, draw_h};

  int pad = 20;
  int btn_y = layout.controls.y + (control_h - kButtonHeight) / 2;
  layout.back_btn = {pad, btn_y, kButtonWidth, kButtonHeight};
  layout.fwd_btn = {pad + kButtonWidth + 16, btn_y, kButtonWidth, kButtonHeight};

  int seek_x = layout.fwd_btn.x + layout.fwd_btn.w + 24;
  int seek_y = layout.controls.y + control_h / 2 - 6;
  int seek_w = std::max(80, win_w - seek_x - pad);
  layout.seek_bar = {seek_x, seek_y, seek_w, 12};

  return layout;
}

void draw_button(SDL_Renderer* renderer, const SDL_Rect& rect, bool forward) {
  SDL_SetRenderDrawColor(renderer, 52, 58, 64, 255);
  SDL_RenderFillRect(renderer, &rect);
  SDL_SetRenderDrawColor(renderer, 190, 197, 204, 255);
  SDL_RenderDrawRect(renderer, &rect);

  int cx = rect.x + rect.w / 2;
  int cy = rect.y + rect.h / 2;
  int s = 10;
  SDL_SetRenderDrawColor(renderer, 230, 230, 230, 255);

  if (forward) {
    SDL_RenderDrawLine(renderer, cx - s, cy - s, cx + s, cy);
    SDL_RenderDrawLine(renderer, cx + s, cy, cx - s, cy + s);
  } else {
    SDL_RenderDrawLine(renderer, cx + s, cy - s, cx - s, cy);
    SDL_RenderDrawLine(renderer, cx - s, cy, cx + s, cy + s);
  }
}

void render_ui(SDL_Renderer* renderer, const UiLayout& layout, double progress) {
  SDL_SetRenderDrawColor(renderer, 20, 24, 28, 255);
  SDL_RenderFillRect(renderer, &layout.controls);

  draw_button(renderer, layout.back_btn, false);
  draw_button(renderer, layout.fwd_btn, true);

  SDL_SetRenderDrawColor(renderer, 70, 70, 70, 255);
  SDL_RenderFillRect(renderer, &layout.seek_bar);

  int fill_w = static_cast<int>(layout.seek_bar.w * std::clamp(progress, 0.0, 1.0));
  SDL_Rect bar_fill = {layout.seek_bar.x, layout.seek_bar.y, fill_w, layout.seek_bar.h};
  SDL_SetRenderDrawColor(renderer, 52, 152, 219, 255);
  SDL_RenderFillRect(renderer, &bar_fill);

  SDL_SetRenderDrawColor(renderer, 220, 220, 220, 255);
  SDL_RenderDrawRect(renderer, &layout.seek_bar);
}

bool point_in_rect(int x, int y, const SDL_Rect& rect) {
  return x >= rect.x && x < rect.x + rect.w && y >= rect.y && y < rect.y + rect.h;
}

void seek_from_position(PlayerContext& ctx, const SDL_Rect& seek_bar, int mouse_x) {
  if (ctx.duration_seconds <= 0.0) {
    return;
  }
  double ratio = static_cast<double>(mouse_x - seek_bar.x) / static_cast<double>(std::max(1, seek_bar.w));
  ratio = std::clamp(ratio, 0.0, 1.0);
  seek_to(ctx, ratio * ctx.duration_seconds);
}

void compute_initial_window_size(int src_w, int src_h, int* out_w, int* out_h) {
  constexpr int kMaxInitialW = 960;
  constexpr int kMaxInitialH = 540;
  double scale_x = static_cast<double>(kMaxInitialW) / static_cast<double>(src_w);
  double scale_y = static_cast<double>(kMaxInitialH) / static_cast<double>(src_h);
  double scale = std::min(1.0, std::min(scale_x, scale_y));
  int w = std::max(480, static_cast<int>(src_w * scale));
  int h = std::max(270, static_cast<int>(src_h * scale));
  *out_w = w;
  *out_h = h + kControlHeight;
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

std::string build_status_payload(const std::string& video_file_name, const PlayerContext& ctx, bool paused,
                                 int win_w, int win_h, const std::string& state_tag) {
  double progress = 0.0;
  if (ctx.duration_seconds > 0.0) {
    progress = std::clamp((ctx.current_seconds / ctx.duration_seconds) * 100.0, 0.0, 100.0);
  }
  double remaining = std::max(0.0, ctx.duration_seconds - ctx.current_seconds);
  int64_t sent_ms = now_epoch_ms();
  int64_t playhead_ms = static_cast<int64_t>(std::max(0.0, ctx.current_seconds) * 1000.0);
  int64_t duration_ms = static_cast<int64_t>(std::max(0.0, ctx.duration_seconds) * 1000.0);
  int64_t remaining_ms = std::max<int64_t>(0, duration_ms - playhead_ms);
  int64_t sync_anchor_epoch_ms = sent_ms - playhead_ms;
  int64_t frame_index = static_cast<int64_t>(ctx.current_seconds * std::max(1.0, ctx.fps));

  std::ostringstream out;
  out << "[VIDEO_STATUS]"
      << " file_name=" << video_file_name << " elapsed=" << format_seconds(ctx.current_seconds)
      << " remaining=" << format_seconds(remaining)
      << " total=" << format_seconds(std::max(0.0, ctx.duration_seconds)) << " progress=" << std::fixed
      << std::setprecision(2) << progress << "%"
      << " fps=" << std::setprecision(2) << ctx.fps << " paused=" << (paused ? "yes" : "no")
      << " eof=" << (ctx.eof ? "yes" : "no") << " window=" << win_w << "x" << win_h
      << " state=" << state_tag << " sent_epoch_ms=" << sent_ms << " sync_anchor_epoch_ms="
      << sync_anchor_epoch_ms << " playhead_ms=" << playhead_ms << " duration_ms=" << duration_ms
      << " remaining_ms=" << remaining_ms << " frame_index=" << frame_index
      << " decoded_frames=" << ctx.decoded_frames << " pts=" << ctx.current_pts;
  return out.str();
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

  PlayerContext ctx;
  if (!init_ffmpeg(ctx, video_path)) {
    free_ffmpeg(ctx);
    return 1;
  }

  if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_TIMER) != 0) {
    std::cerr << "SDL init failed: " << SDL_GetError() << "\n";
    free_ffmpeg(ctx);
    return 1;
  }

  int src_w = ctx.codec_ctx->width;
  int src_h = ctx.codec_ctx->height;
  int win_w = 0;
  int win_h = 0;
  compute_initial_window_size(src_w, src_h, &win_w, &win_h);

  SDL_Window* window =
      SDL_CreateWindow("FFmpeg Video Player", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, win_w,
                       win_h, SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE);
  if (!window) {
    std::cerr << "Failed to create window: " << SDL_GetError() << "\n";
    SDL_Quit();
    free_ffmpeg(ctx);
    return 1;
  }
  SDL_SetWindowMinimumSize(window, 480, 280);

  SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
  if (!renderer) {
    std::cerr << "Failed to create renderer: " << SDL_GetError() << "\n";
    SDL_DestroyWindow(window);
    SDL_Quit();
    free_ffmpeg(ctx);
    return 1;
  }

  SDL_Texture* texture =
      SDL_CreateTexture(renderer, SDL_PIXELFORMAT_RGB24, SDL_TEXTUREACCESS_STREAMING, src_w, src_h);
  if (!texture) {
    std::cerr << "Failed to create texture: " << SDL_GetError() << "\n";
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    free_ffmpeg(ctx);
    return 1;
  }

  bool running = true;
  bool paused = false;
  bool dragging_seek = false;
  bool send_status_now = true;
  std::string status_state = "playing";
  Uint32 last_status_sent_ms = 0;
  Uint32 frame_delay_ms = static_cast<Uint32>(1000.0 / std::max(1.0, ctx.fps));
  std::mutex pending_sync_mutex;
  std::optional<PendingRemoteSync> pending_sync;
  int64_t last_applied_remote_sent_epoch_ms = 0;
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
        if (parsed->file_name != video_file_name) {
          continue;
        }
        if (parsed->sent_epoch_ms <= 0) {
          continue;
        }

        PendingRemoteSync next;
        next.snapshot = *parsed;
        std::lock_guard<std::mutex> lock(pending_sync_mutex);
        pending_sync = next;
      }
    });
  }

  decode_one_frame(ctx);
  SDL_UpdateTexture(texture, nullptr, ctx.rgb_frame->data[0], ctx.rgb_frame->linesize[0]);

  while (running) {
    SDL_GetWindowSize(window, &win_w, &win_h);
    UiLayout layout = compute_layout(win_w, win_h, src_w, src_h);

    SDL_Event event;
    while (SDL_PollEvent(&event)) {
      if (event.type == SDL_QUIT) {
        running = false;
      } else if (event.type == SDL_KEYDOWN) {
        if (event.key.keysym.sym == SDLK_SPACE) {
          paused = !paused;
          status_state = paused ? "paused" : "playing";
          send_status_now = true;
        }
        if (event.key.keysym.sym == SDLK_LEFT) {
          seek_to(ctx, ctx.current_seconds - kSeekStepSeconds);
          status_state = "seeking";
          send_status_now = true;
        }
        if (event.key.keysym.sym == SDLK_RIGHT) {
          seek_to(ctx, ctx.current_seconds + kSeekStepSeconds);
          status_state = "seeking";
          send_status_now = true;
        }
      } else if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT) {
        int mx = event.button.x;
        int my = event.button.y;
        if (point_in_rect(mx, my, layout.back_btn)) {
          seek_to(ctx, ctx.current_seconds - kSeekStepSeconds);
          status_state = "seeking";
          send_status_now = true;
        } else if (point_in_rect(mx, my, layout.fwd_btn)) {
          seek_to(ctx, ctx.current_seconds + kSeekStepSeconds);
          status_state = "seeking";
          send_status_now = true;
        } else if (point_in_rect(mx, my, layout.seek_bar)) {
          dragging_seek = true;
          seek_from_position(ctx, layout.seek_bar, mx);
          status_state = "seeking";
          send_status_now = true;
        }
      } else if (event.type == SDL_MOUSEBUTTONUP && event.button.button == SDL_BUTTON_LEFT) {
        dragging_seek = false;
      } else if (event.type == SDL_MOUSEMOTION && dragging_seek) {
        seek_from_position(ctx, layout.seek_bar, event.motion.x);
        status_state = "seeking";
        send_status_now = true;
      }
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
          if (ctx.duration_seconds > 0.0) {
            target_seconds = std::clamp(target_seconds, 0.0, ctx.duration_seconds);
          }

          bool should_seek = (snap.state == "seeking");
          double drift = std::abs(ctx.current_seconds - target_seconds);
          if (!should_seek && drift >= kSyncDriftThresholdSeconds) {
            should_seek = true;
          }

          bool pause_changed = (paused != snap.paused);
          if (should_seek && seek_to(ctx, target_seconds)) {
            SDL_UpdateTexture(texture, nullptr, ctx.rgb_frame->data[0], ctx.rgb_frame->linesize[0]);
          }
          if (pause_changed) {
            paused = snap.paused;
          }

          if (should_seek || pause_changed) {
            status_state = snap.paused ? "paused" : "playing";
          }
          last_applied_remote_sent_epoch_ms = snap.sent_epoch_ms;
        }
      }
    }

    if (!paused && !ctx.eof) {
      if (decode_one_frame(ctx)) {
        SDL_UpdateTexture(texture, nullptr, ctx.rgb_frame->data[0], ctx.rgb_frame->linesize[0]);
        if (status_state != "seeking") {
          status_state = "playing";
        }
      }
    }
    if (ctx.eof) {
      status_state = "eof";
    }

    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);
    SDL_RenderCopy(renderer, texture, nullptr, &layout.video_dst);
    double progress = ctx.duration_seconds > 0.0 ? (ctx.current_seconds / ctx.duration_seconds) : 0.0;
    render_ui(renderer, layout, progress);
    SDL_RenderPresent(renderer);

    Uint32 now_ms = SDL_GetTicks();
    if (status_connected &&
        (send_status_now || now_ms - last_status_sent_ms >= kStatusSendIntervalMs)) {
      std::string payload =
          build_status_payload(video_file_name, ctx, paused, win_w, win_h, status_state);
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

    SDL_Delay(frame_delay_ms);
  }

  if (status_connected) {
    status_client.SendLine(build_status_payload(video_file_name, ctx, paused, win_w, win_h, "closed"));
  }
  status_client.Disconnect();

  SDL_DestroyTexture(texture);
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  SDL_Quit();
  free_ffmpeg(ctx);
  return 0;
}
