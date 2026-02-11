#include "chat_client.h"

#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  std::string server_ip = "127.0.0.1";
  int port = 54000;

  if (argc > 1) {
    server_ip = argv[1];
  }
  if (argc > 2) {
    port = std::stoi(argv[2]);
  }

  ChatClient client;
  if (!client.Connect(server_ip, port)) {
    return 1;
  }

  std::cout << "Connected to " << server_ip << ":" << port << '\n';
  std::cout << "Type messages and press Enter. Type /quit to exit.\n";
  client.StartReceiver();

  std::string line;
  while (client.IsConnected() && std::getline(std::cin, line)) {
    if (line == "/quit") {
      break;
    }
    if (!client.SendLine(line)) {
      std::cerr << "Send failed.\n";
      break;
    }
  }

  client.Disconnect();
  return 0;
}
