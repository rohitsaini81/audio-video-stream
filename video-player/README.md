# Video Player (FFmpeg)

This is a C++ video player built with FFmpeg decoding + SDL2 rendering.
Pass a video path to the compiled binary and it will play the video with:
- a seek bar (click to jump)
- seek bar drag support for precise scrubbing
- backward button (seek -10s)
- forward button (seek +10s)
- resizable window with aspect-ratio-preserving video scaling

## Build

```bash
g++ -std=c++17 player.cpp -o video_player \
  $(pkg-config --cflags --libs sdl2 libavformat libavcodec libswscale libavutil)
```

## Run

```bash
./video_player /path/to/video.mp4
```

## Notes

- Keyboard shortcuts:
  - `Left Arrow`: seek backward 10 seconds
  - `Right Arrow`: seek forward 10 seconds
  - `Space`: pause/resume
