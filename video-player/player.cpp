#include <SDL2/SDL.h>

extern "C" {
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libavutil/imgutils.h>
#include <libswscale/swscale.h>
}

#include <algorithm>
#include <iostream>
#include <string>

namespace {
constexpr int kControlHeight = 90;
constexpr int kButtonWidth = 80;
constexpr int kButtonHeight = 42;
constexpr int kSeekStepSeconds = 10;

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
  bool eof = false;
};

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
  if (ctx.format_ctx->duration > 0) {
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

    int64_t ts = ctx.frame->best_effort_timestamp;
    if (ts != AV_NOPTS_VALUE) {
      AVRational tb = ctx.format_ctx->streams[ctx.video_stream_index]->time_base;
      ctx.current_seconds = ts * av_q2d(tb);
      if (ctx.duration_seconds > 0.0) {
        ctx.current_seconds = std::clamp(ctx.current_seconds, 0.0, ctx.duration_seconds);
      }
    }
    return true;
  }
}

void seek_to(PlayerContext& ctx, double target_seconds) {
  if (ctx.duration_seconds > 0.0) {
    target_seconds = std::clamp(target_seconds, 0.0, ctx.duration_seconds);
  } else {
    target_seconds = std::max(0.0, target_seconds);
  }

  AVStream* stream = ctx.format_ctx->streams[ctx.video_stream_index];
  int64_t seek_ts = static_cast<int64_t>(target_seconds / av_q2d(stream->time_base));
  if (av_seek_frame(ctx.format_ctx, ctx.video_stream_index, seek_ts, AVSEEK_FLAG_BACKWARD) >= 0) {
    avcodec_flush_buffers(ctx.codec_ctx);
    ctx.current_seconds = target_seconds;
    ctx.eof = false;
  }
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

void render_ui(SDL_Renderer* renderer, int video_w, int video_h, double progress) {
  SDL_Rect controls = {0, video_h, video_w, kControlHeight};
  SDL_SetRenderDrawColor(renderer, 20, 24, 28, 255);
  SDL_RenderFillRect(renderer, &controls);

  SDL_Rect back_btn = {20, video_h + 20, kButtonWidth, kButtonHeight};
  SDL_Rect fwd_btn = {120, video_h + 20, kButtonWidth, kButtonHeight};
  draw_button(renderer, back_btn, false);
  draw_button(renderer, fwd_btn, true);

  int bar_x = 230;
  int bar_y = video_h + 35;
  int bar_w = std::max(60, video_w - bar_x - 30);
  int bar_h = 12;

  SDL_Rect bar_bg = {bar_x, bar_y, bar_w, bar_h};
  SDL_SetRenderDrawColor(renderer, 70, 70, 70, 255);
  SDL_RenderFillRect(renderer, &bar_bg);

  int fill_w = static_cast<int>(bar_w * std::clamp(progress, 0.0, 1.0));
  SDL_Rect bar_fill = {bar_x, bar_y, fill_w, bar_h};
  SDL_SetRenderDrawColor(renderer, 52, 152, 219, 255);
  SDL_RenderFillRect(renderer, &bar_fill);

  SDL_SetRenderDrawColor(renderer, 220, 220, 220, 255);
  SDL_RenderDrawRect(renderer, &bar_bg);
}

bool point_in_rect(int x, int y, const SDL_Rect& rect) {
  return x >= rect.x && x < rect.x + rect.w && y >= rect.y && y < rect.y + rect.h;
}
}  // namespace

int main(int argc, char* argv[]) {
  if (argc < 2) {
    std::cerr << "Usage: " << argv[0] << " <video_path>\n";
    return 1;
  }

  const std::string video_path = argv[1];
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

  int video_w = ctx.codec_ctx->width;
  int video_h = ctx.codec_ctx->height;
  SDL_Window* window = SDL_CreateWindow("FFmpeg Video Player", SDL_WINDOWPOS_CENTERED,
                                        SDL_WINDOWPOS_CENTERED, video_w, video_h + kControlHeight,
                                        SDL_WINDOW_SHOWN);
  if (!window) {
    std::cerr << "Failed to create window: " << SDL_GetError() << "\n";
    SDL_Quit();
    free_ffmpeg(ctx);
    return 1;
  }

  SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
  if (!renderer) {
    std::cerr << "Failed to create renderer: " << SDL_GetError() << "\n";
    SDL_DestroyWindow(window);
    SDL_Quit();
    free_ffmpeg(ctx);
    return 1;
  }

  SDL_Texture* texture =
      SDL_CreateTexture(renderer, SDL_PIXELFORMAT_RGB24, SDL_TEXTUREACCESS_STREAMING, video_w, video_h);
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
  Uint32 frame_delay_ms = static_cast<Uint32>(1000.0 / std::max(1.0, ctx.fps));

  while (running) {
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
      if (event.type == SDL_QUIT) {
        running = false;
      } else if (event.type == SDL_KEYDOWN) {
        if (event.key.keysym.sym == SDLK_SPACE) paused = !paused;
        if (event.key.keysym.sym == SDLK_LEFT) seek_to(ctx, ctx.current_seconds - kSeekStepSeconds);
        if (event.key.keysym.sym == SDLK_RIGHT) seek_to(ctx, ctx.current_seconds + kSeekStepSeconds);
      } else if (event.type == SDL_MOUSEBUTTONDOWN && event.button.button == SDL_BUTTON_LEFT) {
        SDL_Rect back_btn = {20, video_h + 20, kButtonWidth, kButtonHeight};
        SDL_Rect fwd_btn = {120, video_h + 20, kButtonWidth, kButtonHeight};
        SDL_Rect seek_bar = {230, video_h + 35, std::max(60, video_w - 230 - 30), 12};
        int mx = event.button.x;
        int my = event.button.y;
        if (point_in_rect(mx, my, back_btn)) {
          seek_to(ctx, ctx.current_seconds - kSeekStepSeconds);
        } else if (point_in_rect(mx, my, fwd_btn)) {
          seek_to(ctx, ctx.current_seconds + kSeekStepSeconds);
        } else if (point_in_rect(mx, my, seek_bar) && ctx.duration_seconds > 0.0) {
          double ratio =
              static_cast<double>(mx - seek_bar.x) / static_cast<double>(std::max(1, seek_bar.w));
          seek_to(ctx, ratio * ctx.duration_seconds);
        }
      }
    }

    if (!paused && !ctx.eof) {
      if (decode_one_frame(ctx)) {
        SDL_UpdateTexture(texture, nullptr, ctx.rgb_frame->data[0], ctx.rgb_frame->linesize[0]);
      }
    }

    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);
    SDL_Rect dst = {0, 0, video_w, video_h};
    SDL_RenderCopy(renderer, texture, nullptr, &dst);
    double progress = ctx.duration_seconds > 0.0 ? (ctx.current_seconds / ctx.duration_seconds) : 0.0;
    render_ui(renderer, video_w, video_h, progress);
    SDL_RenderPresent(renderer);

    SDL_Delay(frame_delay_ms);
  }

  SDL_DestroyTexture(texture);
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  SDL_Quit();
  free_ffmpeg(ctx);
  return 0;
}
