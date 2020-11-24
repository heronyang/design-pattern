#include "console_logger.h"
#include "gtest/gtest.h"
#include <memory>

TEST(ConsoleLoggerTest, LogSupportedLevel) {
  ConsoleLogger console_logger({Logger::LogLevel::INFO});
  testing::internal::CaptureStdout();
  console_logger.Log(Logger::LogLevel::INFO, "Hello");
  EXPECT_EQ("Writing to console: Hello\n",
            testing::internal::GetCapturedStdout());
}

TEST(ConsoleLoggerTest, LogUnsupportedLevel) {
  ConsoleLogger console_logger({Logger::LogLevel::INFO});
  testing::internal::CaptureStdout();
  console_logger.Log(Logger::LogLevel::WARNING, "Hello");
  EXPECT_EQ("", testing::internal::GetCapturedStdout());
}

TEST(ConsoleLoggerTest, LogWithNextLogger) {
  std::set<Logger::LogLevel> levels = {Logger::LogLevel::INFO};
  ConsoleLogger main_logger(levels);
  main_logger.AddNext(std::make_unique<ConsoleLogger>(levels));

  testing::internal::CaptureStdout();
  main_logger.Log(Logger::LogLevel::INFO, "Hello");
  EXPECT_EQ("Writing to console: Hello\nWriting to console: Hello\n",
            testing::internal::GetCapturedStdout());
}
