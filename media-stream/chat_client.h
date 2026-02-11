#ifndef MEDIA_STREAM_CHAT_CLIENT_H_
#define MEDIA_STREAM_CHAT_CLIENT_H_

#include <atomic>
#include <functional>
#include <string>
#include <thread>

class ChatClient {
 public:
  using MessageCallback = std::function<void(const std::string&)>;

  ChatClient();
  ~ChatClient();

  bool Connect(const std::string& server_ip, int port);
  bool SendLine(const std::string& text);
  void StartReceiver(MessageCallback on_message = nullptr);
  void StopReceiver();
  void Disconnect();
  bool IsConnected() const;

 private:
  void ReceiveLoop();

  int sock_fd_;
  std::atomic<bool> connected_;
  std::atomic<bool> receiver_running_;
  std::thread receiver_thread_;
  MessageCallback on_message_;
};

#endif  // MEDIA_STREAM_CHAT_CLIENT_H_
