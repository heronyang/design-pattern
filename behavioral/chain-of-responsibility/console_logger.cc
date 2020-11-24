#include "console_logger.h"
#include <iostream>

void ConsoleLogger::WriteLog(std::string message) {
  std::cout << "Writing to console: " << message << std::endl;
}
