# VLC Sync Player Backend

`sync_vlc_player.cpp` implements the same backend sync/control behavior as `video-player/player.cpp`:

- periodic `[VIDEO_STATUS]` broadcast to `media-stream` server
- remote sync by `file_name`
- mirrored pause/resume
- mirrored seek
- drift correction for playing peers

## Build

Build against the local VLC tree you already compiled:

```bash
cd /home/rohit/work/audio-video-stream/vlc
g++ -std=c++17 -pthread -Iinclude sync_vlc_player.cpp ../media-stream/chat_client.cpp \
  -Llib/.libs -lvlc -Wl,-rpath,$PWD/lib/.libs -o sync_vlc_player
```

## Run

```bash
cd /home/rohit/work/audio-video-stream/vlc
./sync_vlc_player /path/to/video.mp4 [sync_server_ip] [sync_server_port]
```

Default sync server is `127.0.0.1:54000`.

## Local Control Commands (stdin)

- `p` or `space` : toggle pause/resume
- `left` or `back` : seek -10s
- `right` or `fwd` : seek +10s
- `seek <seconds>` : absolute seek
- `q` : quit
