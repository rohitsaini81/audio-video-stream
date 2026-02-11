# Video Player (FFmpeg)

This is a simple C++ video player launcher that uses FFmpeg's `ffplay`.
Pass a video path to the compiled binary and it will play the video.

## Build

```bash
g++ -std=c++17 player.cpp -o video_player
```

## Run

```bash
./video_player /path/to/video.mp4
```

## Notes

- Requires `ffplay` installed and available in `PATH`.
- Playback exits automatically when the video ends.
