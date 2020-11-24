#include "file_logger.h"
#include "gtest/gtest.h"

TEST(FileLoggerTest, LogSupportedLevel) {
  FileLogger file_logger({Logger::LogLevel::INFO});
  testing::internal::CaptureStdout();
  file_logger.Log(Logger::LogLevel::INFO, "Hello");
  EXPECT_EQ("Writing to file: Hello\n", testing::internal::GetCapturedStdout());
}

TEST(FileLoggerTest, LogUnsupportedLevel) {
  FileLogger file_logger({Logger::LogLevel::INFO});
  testing::internal::CaptureStdout();
  file_logger.Log(Logger::LogLevel::WARNING, "Hello");
  EXPECT_EQ("", testing::internal::GetCapturedStdout());
}

TEST(FileLoggerTest, LogWithNextLogger) {
  std::set<Logger::LogLevel> levels = {Logger::LogLevel::INFO};
  FileLogger main_logger(levels);
  main_logger.AddNext(std::make_unique<FileLogger>(levels));

  testing::internal::CaptureStdout();
  main_logger.Log(Logger::LogLevel::INFO, "Hello");
  EXPECT_EQ("Writing to file: Hello\nWriting to file: Hello\n",
            testing::internal::GetCapturedStdout());
}
