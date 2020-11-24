#ifndef LOGGER_H_
#define LOGGER_H_

#include <memory>
#include <set>
#include <string>

class Logger {
public:
  enum LogLevel { INFO, WARNING, ERROR };

  Logger(std::set<LogLevel> supported_log_levels);

  Logger *AddNext(std::unique_ptr<Logger> next_logger);

  // Logs the `message` at `level` if the `level` is supported by this logging;
  // then, asks the next logger (if exists) to do the same.
  void Log(LogLevel level, std::string message);

  virtual ~Logger(){};

protected:
  virtual void WriteLog(std::string message) = 0;

private:
  std::set<LogLevel> supported_log_levels_;
  std::unique_ptr<Logger> next_logger_;
};

#endif
