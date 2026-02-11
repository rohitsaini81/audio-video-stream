#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>

#include <atomic>
#include <cstring>
#include <iostream>
#include <string>
#include <thread>

namespace {
constexpr int kBufferSize = 1024;

void receive_messages(int sock_fd, std::atomic<bool>& running) {
  char buffer[kBufferSize];
  while (running.load()) {
    std::memset(buffer, 0, sizeof(buffer));
    ssize_t bytes_received = recv(sock_fd, buffer, sizeof(buffer) - 1, 0);
    if (bytes_received <= 0) {
      std::cout << "\nDisconnected from server.\n";
      running.store(false);
      break;
    }
    std::cout << buffer << std::flush;
  }
}
}  // namespace

int main(int argc, char* argv[]) {
  std::string server_ip = "127.0.0.1";
  int port = 54000;

  if (argc > 1) {
    server_ip = argv[1];
  }
  if (argc > 2) {
    port = std::stoi(argv[2]);
  }

  int sock_fd = socket(AF_INET, SOCK_STREAM, 0);
  if (sock_fd < 0) {
    std::cerr << "Socket creation failed.\n";
    return 1;
  }

  sockaddr_in server_addr{};
  server_addr.sin_family = AF_INET;
  server_addr.sin_port = htons(static_cast<uint16_t>(port));
  if (inet_pton(AF_INET, server_ip.c_str(), &server_addr.sin_addr) <= 0) {
    std::cerr << "Invalid server IP: " << server_ip << '\n';
    close(sock_fd);
    return 1;
  }

  if (connect(sock_fd, reinterpret_cast<sockaddr*>(&server_addr), sizeof(server_addr)) < 0) {
    std::cerr << "Connection failed to " << server_ip << ":" << port << '\n';
    close(sock_fd);
    return 1;
  }

  std::cout << "Connected to " << server_ip << ":" << port << '\n';
  std::cout << "Type messages and press Enter. Type /quit to exit.\n";

  std::atomic<bool> running(true);
  std::thread receiver(receive_messages, sock_fd, std::ref(running));

  std::string line;
  while (running.load() && std::getline(std::cin, line)) {
    if (line == "/quit") {
      running.store(false);
      break;
    }
    line.push_back('\n');
    ssize_t sent = send(sock_fd, line.c_str(), line.size(), 0);
    if (sent < 0) {
      std::cerr << "Send failed.\n";
      running.store(false);
      break;
    }
  }

  shutdown(sock_fd, SHUT_RDWR);
  close(sock_fd);
  if (receiver.joinable()) {
    receiver.join();
  }

  return 0;
}
