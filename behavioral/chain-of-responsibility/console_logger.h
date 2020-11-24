#ifndef CONSOLE_LOGGER_H_
#define CONSOLE_LOGGER_H_

#include "logger.h"

class ConsoleLogger : public Logger {
public:
  ConsoleLogger(std::set<LogLevel> supported_log_levels)
      : Logger(supported_log_levels){};

  ~ConsoleLogger() = default;

private:
  void WriteLog(std::string message) override;
};

#endif
