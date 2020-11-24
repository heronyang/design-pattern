#include "email_logger.h"
#include <iostream>

void EmailLogger::WriteLog(std::string message) {
  std::cout << "Emailing: " << message << std::endl;
}
