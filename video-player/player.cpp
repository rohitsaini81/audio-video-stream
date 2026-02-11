#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

#include <cerrno>
#include <cstring>
#include <iostream>
#include <string>

namespace {
bool file_exists(const std::string& path) {
  struct stat st {};
  return stat(path.c_str(), &st) == 0 && S_ISREG(st.st_mode);
}
}  // namespace

int main(int argc, char* argv[]) {
  if (argc < 2) {
    std::cerr << "Usage: " << argv[0] << " <video_path>\n";
    return 1;
  }

  std::string video_path = argv[1];
  if (!file_exists(video_path)) {
    std::cerr << "File does not exist: " << video_path << "\n";
    return 1;
  }

  pid_t pid = fork();
  if (pid < 0) {
    std::cerr << "Failed to fork: " << std::strerror(errno) << "\n";
    return 1;
  }

  if (pid == 0) {
    execlp("ffplay", "ffplay", "-autoexit", "-loglevel", "error", video_path.c_str(),
           static_cast<char*>(nullptr));
    std::cerr << "Failed to launch ffplay. Ensure FFmpeg/ffplay is installed.\n";
    _exit(127);
  }

  int status = 0;
  if (waitpid(pid, &status, 0) < 0) {
    std::cerr << "Failed waiting for ffplay process.\n";
    return 1;
  }

  if (WIFEXITED(status)) {
    return WEXITSTATUS(status);
  }
  return 1;
}
