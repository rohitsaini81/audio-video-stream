#include "chat_client.h"

#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>

#include <cstring>
#include <iostream>

namespace {
constexpr int kBufferSize = 1024;
}

ChatClient::ChatClient() : sock_fd_(-1), connected_(false), receiver_running_(false) {}

ChatClient::~ChatClient() { Disconnect(); }

bool ChatClient::Connect(const std::string& server_ip, int port) {
  if (connected_.load()) {
    return true;
  }

  sock_fd_ = socket(AF_INET, SOCK_STREAM, 0);
  if (sock_fd_ < 0) {
    std::cerr << "Socket creation failed.\n";
    return false;
  }

  sockaddr_in server_addr{};
  server_addr.sin_family = AF_INET;
  server_addr.sin_port = htons(static_cast<uint16_t>(port));
  if (inet_pton(AF_INET, server_ip.c_str(), &server_addr.sin_addr) <= 0) {
    std::cerr << "Invalid server IP: " << server_ip << '\n';
    close(sock_fd_);
    sock_fd_ = -1;
    return false;
  }

  if (connect(sock_fd_, reinterpret_cast<sockaddr*>(&server_addr), sizeof(server_addr)) < 0) {
    std::cerr << "Connection failed to " << server_ip << ":" << port << '\n';
    close(sock_fd_);
    sock_fd_ = -1;
    return false;
  }

  connected_.store(true);
  return true;
}

bool ChatClient::SendLine(const std::string& text) {
  if (!connected_.load() || sock_fd_ < 0) {
    return false;
  }

  std::string line = text;
  if (line.empty() || line.back() != '\n') {
    line.push_back('\n');
  }

  ssize_t sent = send(sock_fd_, line.c_str(), line.size(), 0);
  if (sent < 0) {
    connected_.store(false);
    return false;
  }
  return true;
}

void ChatClient::StartReceiver(MessageCallback on_message) {
  if (!connected_.load() || receiver_running_.load()) {
    return;
  }
  on_message_ = std::move(on_message);
  receiver_running_.store(true);
  receiver_thread_ = std::thread(&ChatClient::ReceiveLoop, this);
}

void ChatClient::StopReceiver() {
  receiver_running_.store(false);
  if (receiver_thread_.joinable()) {
    receiver_thread_.join();
  }
}

void ChatClient::Disconnect() {
  StopReceiver();
  if (sock_fd_ >= 0) {
    shutdown(sock_fd_, SHUT_RDWR);
    close(sock_fd_);
    sock_fd_ = -1;
  }
  connected_.store(false);
}

bool ChatClient::IsConnected() const { return connected_.load(); }

void ChatClient::ReceiveLoop() {
  char buffer[kBufferSize];
  while (receiver_running_.load() && connected_.load()) {
    std::memset(buffer, 0, sizeof(buffer));
    ssize_t bytes_received = recv(sock_fd_, buffer, sizeof(buffer) - 1, 0);
    if (bytes_received <= 0) {
      connected_.store(false);
      break;
    }
    std::string msg(buffer, static_cast<size_t>(bytes_received));
    if (on_message_) {
      on_message_(msg);
    } else {
      std::cout << msg << std::flush;
    }
  }
  receiver_running_.store(false);
}
