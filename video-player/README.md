# Video Player (FFmpeg)

This is a C++ video player built with FFmpeg decoding + SDL2 rendering.
Pass a video path to the compiled binary and it will play the video with:
- a seek bar (click to jump)
- seek bar drag support for precise scrubbing
- backward button (seek -10s)
- forward button (seek +10s)
- resizable window with aspect-ratio-preserving video scaling
- realtime playback status streaming to `media-stream` server (`127.0.0.1:54000`)

## Build

```bash
g++ -std=c++17 -pthread player.cpp ../media-stream/chat_client.cpp -o video_player \
  $(pkg-config --cflags --libs sdl2 libavformat libavcodec libswscale libavutil)
```

## Run

1. Start broadcast server:
```bash
cd ../media-stream
./server 54000
```

2. Start player:
```bash
cd ../video-player
./video_player /path/to/video.mp4
```

## Notes

- Keyboard shortcuts:
  - `Left Arrow`: seek backward 10 seconds
  - `Right Arrow`: seek forward 10 seconds
  - `Space`: pause/resume
- Player emits status lines with elapsed/remaining/total/progress/fps/pause/window info.
