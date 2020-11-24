#include "file_logger.h"
#include <iostream>

void FileLogger::WriteLog(std::string message) {
  std::cout << "Writing to file: " << message << std::endl;
}
