# Codex Handover Notes (audio-video-stream)

This file summarizes all session work so another AI can continue quickly.

## Scope
- Active project parts:
  - `media-stream`
  - `video-player`
- Ignore `voice-changer` (explicitly out of scope for this work).

## High-Level System
- `media-stream/server.cpp` is a TCP broadcast server (default port `54000`).
- `media-stream/client.cpp` is a CLI chat client using reusable API in:
  - `media-stream/chat_client.h`
  - `media-stream/chat_client.cpp`
- `video-player/player.cpp` is an FFmpeg+SDL2 video player with:
  - seek bar + drag scrub
  - back/forward seek controls
  - resizable window
  - realtime playback telemetry over TCP to `127.0.0.1:54000`

## What Was Implemented During This Session

### 1) media-stream: TCP chat broadcast
- Added initial server/client implementation.
- Server accepts multiple clients and broadcasts received messages to all other connected clients.

### 2) video-player: FFmpeg player
- Started as ffplay launcher, later replaced with native FFmpeg decode + SDL2 render loop.
- Features now:
  - clickable seek bar
  - seek drag support
  - forward/back buttons (`+/-10s`)
  - keyboard controls (`Left`, `Right`, `Space`)
  - resizable window with aspect-ratio-preserving video rendering
  - smaller initial window size for large videos

### 3) media-stream reusable client API
- Refactored networking client logic into reusable module:
  - `ChatClient::Connect`
  - `ChatClient::SendLine`
  - `ChatClient::StartReceiver`
  - `ChatClient::StopReceiver`
  - `ChatClient::Disconnect`
  - `ChatClient::IsConnected`
- `media-stream/client.cpp` now uses this API.

### 4) video-player -> media-stream telemetry integration
- `video-player/player.cpp` now connects to TCP server on `127.0.0.1:54000`.
- Sends periodic playback status every ~1s and immediately on important state changes (pause/seek/etc).

### 5) Frame-level sync telemetry for follower clients
Telemetry now includes data intended to synchronize other players with the leader:
- Base status fields:
  - `file`
  - `elapsed`
  - `remaining`
  - `total`
  - `progress`
  - `fps`
  - `paused`
  - `eof`
  - `window`
- Sync-specific fields:
  - `state` (`playing`, `paused`, `seeking`, `eof`, `closed`)
  - `sent_epoch_ms`
  - `sync_anchor_epoch_ms`
  - `playhead_ms`
  - `duration_ms`
  - `remaining_ms`
  - `frame_index`
  - `decoded_frames`
  - `pts`

Sync hint for follower clients:
- If leader is playing: `target_playhead_ms = now_epoch_ms - sync_anchor_epoch_ms`
- If leader is paused: use `playhead_ms` directly.

## Important Runtime Behavior
- `media-stream/server.cpp` prefixes incoming messages with `ClientN:` before broadcasting.
- Telemetry lines from video player are sent as normal text lines, prefixed with `[VIDEO_STATUS]` in payload.
- Any connected client (e.g., `media-stream/client`) will receive these broadcast lines.

## Build Instructions

### media-stream
```bash
cd /home/rohit/work/audio-video-stream/media-stream
g++ -std=c++17 -pthread server.cpp -o server
g++ -std=c++17 -pthread client.cpp chat_client.cpp -o client
```

### video-player
```bash
cd /home/rohit/work/audio-video-stream/video-player
g++ -std=c++17 -pthread player.cpp ../media-stream/chat_client.cpp -o video_player \
  $(pkg-config --cflags --libs sdl2 libavformat libavcodec libswscale libavutil)
```

## Run Instructions
1. Start broadcast server:
```bash
cd /home/rohit/work/audio-video-stream/media-stream
./server 54000
```

2. Optional monitor client(s):
```bash
./client 127.0.0.1 54000
```

3. Start player:
```bash
cd /home/rohit/work/audio-video-stream/video-player
./video_player /path/to/video.mp4
```

## Commits Made In This Session
- `aedb50d` Add C++ TCP chat client-server with broadcast
- `4554ec1` Add FFmpeg-based video player binary launcher
- `aeb6477` Add seekbar and skip controls to FFmpeg video player
- `de4dede` Improve seek accuracy and make video player window resizable
- `2d54269` Stream video playback telemetry via media server using reusable chat client API
- `b55c9b0` Add frame-level sync telemetry for follower video playback

## Current Known Limitations / Next Logical Steps
- Audio playback is not implemented in `video-player` (video rendering + control + telemetry only).
- Follower synchronization player/client is not implemented yet; only leader telemetry exists.
- Server labels messages as `ClientN`, so telemetry identity is by connection order unless protocol is extended.

## Notes For Future AI
- Preserve current scope: work only in `media-stream` and `video-player` unless user asks otherwise.
- Do not treat `voice-changer` as part of this project.
