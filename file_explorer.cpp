#include <iostream>
#include <filesystem>
#include <iomanip>

namespace fs = std::filesystem;

void listFiles(const std::string& directoryPath) {
  try {
    for (const auto& entry : fs::directory_iterator(directoryPath)) {
      const auto& path = entry.path();
      std::cout << path.filename().string() << "\t";

      if (fs::is_regular_file(path)) {
        std::cout << fs::file_size(path) << " bytes\t";
      } else {
        std::cout << "Directory\t";
      }

      std::cout << (fs::is_directory(path) ? "Directory" : "File") << std::endl;
    }
  } catch (const std::exception& ex) {
    std::cerr << "Error " << ex.what() << std::endl;
  }
}

int main() {
  std::string directoryPath = std::filesystem::current_path().string();
  listFiles(directoryPath);

  return 0;
}
