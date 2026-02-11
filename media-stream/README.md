# TCP Chat Client-Server (C++)

This folder contains a simple TCP chat system:
- `server.cpp`: accepts multiple clients and broadcasts each received message to all other connected clients.
- `client.cpp`: connects to server, sends typed messages, and prints broadcast messages.

## Build

```bash
g++ -std=c++17 -pthread server.cpp -o server
g++ -std=c++17 -pthread client.cpp -o client
```

## Run

1. Start server:
```bash
./server 54000
```

2. Start multiple clients (different terminals):
```bash
./client 127.0.0.1 54000
```

3. Chat from any client and messages will be broadcast to others.
4. Type `/quit` in a client to exit.
