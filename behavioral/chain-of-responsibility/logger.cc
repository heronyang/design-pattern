#include "logger.h"
#include <cstdio>
#include <memory>

Logger::Logger(std::set<LogLevel> supported_log_levels)
    : supported_log_levels_(supported_log_levels) {}

Logger *Logger::AddNext(std::unique_ptr<Logger> next_logger) {
  next_logger_ = std::move(next_logger);
  return next_logger_.get();
}

void Logger::Log(LogLevel level, std::string message) {
  if (supported_log_levels_.count(level) > 0) {
    WriteLog(message);
  }
  if (next_logger_ != nullptr) {
    next_logger_->Log(level, message);
  }
}
