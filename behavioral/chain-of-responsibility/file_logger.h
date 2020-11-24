#ifndef FILE_LOGGER_H_
#define FILE_LOGGER_H_

#include "logger.h"

class FileLogger : public Logger {
public:
  FileLogger(std::set<LogLevel> supported_log_levels)
      : Logger(supported_log_levels){};

  ~FileLogger() = default;

private:
  void WriteLog(std::string message) override;
};

#endif
