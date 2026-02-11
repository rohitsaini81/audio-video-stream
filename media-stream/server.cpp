#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>

#include <algorithm>
#include <cstring>
#include <iostream>
#include <mutex>
#include <string>
#include <thread>
#include <vector>

namespace {
constexpr int kBufferSize = 1024;

std::vector<int> clients;
std::mutex clients_mutex;

void remove_client(int client_fd) {
  std::lock_guard<std::mutex> lock(clients_mutex);
  clients.erase(std::remove(clients.begin(), clients.end(), client_fd), clients.end());
}

void broadcast_message(const std::string& message, int sender_fd) {
  std::lock_guard<std::mutex> lock(clients_mutex);
  for (int fd : clients) {
    if (fd == sender_fd) {
      continue;
    }
    ssize_t sent = send(fd, message.c_str(), message.size(), 0);
    if (sent < 0) {
      std::cerr << "Failed to send to client fd " << fd << '\n';
    }
  }
}

void handle_client(int client_fd, std::string client_label) {
  char buffer[kBufferSize];

  std::string join_message = client_label + " joined the chat.\n";
  broadcast_message(join_message, client_fd);
  std::cout << join_message;

  while (true) {
    std::memset(buffer, 0, sizeof(buffer));
    ssize_t bytes_received = recv(client_fd, buffer, sizeof(buffer) - 1, 0);
    if (bytes_received <= 0) {
      break;
    }
    std::string text(buffer, static_cast<size_t>(bytes_received));
    std::string outbound = client_label + ": " + text;
    broadcast_message(outbound, client_fd);
    std::cout << outbound;
  }

  close(client_fd);
  remove_client(client_fd);
  std::string leave_message = client_label + " left the chat.\n";
  broadcast_message(leave_message, client_fd);
  std::cout << leave_message;
}
}  // namespace

int main(int argc, char* argv[]) {
  int port = 54000;
  if (argc > 1) {
    port = std::stoi(argv[1]);
  }

  int server_fd = socket(AF_INET, SOCK_STREAM, 0);
  if (server_fd < 0) {
    std::cerr << "Socket creation failed.\n";
    return 1;
  }

  int opt = 1;
  if (setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt)) < 0) {
    std::cerr << "setsockopt(SO_REUSEADDR) failed.\n";
    close(server_fd);
    return 1;
  }

  sockaddr_in server_addr{};
  server_addr.sin_family = AF_INET;
  server_addr.sin_addr.s_addr = INADDR_ANY;
  server_addr.sin_port = htons(static_cast<uint16_t>(port));

  if (bind(server_fd, reinterpret_cast<sockaddr*>(&server_addr), sizeof(server_addr)) < 0) {
    std::cerr << "Bind failed on port " << port << ".\n";
    close(server_fd);
    return 1;
  }

  if (listen(server_fd, 10) < 0) {
    std::cerr << "Listen failed.\n";
    close(server_fd);
    return 1;
  }

  std::cout << "Server listening on port " << port << '\n';

  int client_counter = 1;
  while (true) {
    sockaddr_in client_addr{};
    socklen_t client_len = sizeof(client_addr);
    int client_fd = accept(server_fd, reinterpret_cast<sockaddr*>(&client_addr), &client_len);
    if (client_fd < 0) {
      std::cerr << "Accept failed.\n";
      continue;
    }

    std::string label = "Client" + std::to_string(client_counter++);
    {
      std::lock_guard<std::mutex> lock(clients_mutex);
      clients.push_back(client_fd);
    }

    std::thread client_thread(handle_client, client_fd, label);
    client_thread.detach();
  }

  close(server_fd);
  return 0;
}
