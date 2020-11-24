#ifndef EMAIL_LOGGER_H_
#define EMAIL_LOGGER_H_

#include "logger.h"

class EmailLogger : public Logger {
public:
  EmailLogger(std::set<LogLevel> supported_log_levels)
      : Logger(supported_log_levels){};

  ~EmailLogger() = default;

private:
  void WriteLog(std::string message) override;
};

#endif
