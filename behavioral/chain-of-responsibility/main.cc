#include "console_logger.h"
#include "email_logger.h"
#include "file_logger.h"
#include <memory>

using LogLevel = Logger::LogLevel;

std::unique_ptr<Logger> GetLogger() {
  std::set<LogLevel> console_log_levels = {LogLevel::INFO, LogLevel::WARNING,
                                           LogLevel::ERROR};
  std::set<LogLevel> file_log_levels = {LogLevel::WARNING, LogLevel::ERROR};
  std::set<LogLevel> email_log_levels = {LogLevel::ERROR};

  std::unique_ptr<Logger> logger =
      std::make_unique<ConsoleLogger>(console_log_levels);
  logger->AddNext(std::make_unique<FileLogger>(file_log_levels))
      ->AddNext(std::make_unique<EmailLogger>(email_log_levels));
  return logger;
}

int main() {
  std::unique_ptr<Logger> logger = GetLogger();

  logger->Log(Logger::LogLevel::INFO, "I'm informing you.");
  logger->Log(Logger::LogLevel::WARNING, "I'm warming you.");
  logger->Log(Logger::LogLevel::ERROR, "I crashed.");

  return 0;
}
