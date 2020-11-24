#include "email_logger.h"
#include "gtest/gtest.h"
#include <memory>

TEST(EmailLoggerTest, LogSupportedLevel) {
  EmailLogger email_logger({Logger::LogLevel::INFO});
  testing::internal::CaptureStdout();
  email_logger.Log(Logger::LogLevel::INFO, "Hello");
  EXPECT_EQ("Emailing: Hello\n", testing::internal::GetCapturedStdout());
}

TEST(EmailLoggerTest, LogUnsupportedLevel) {
  EmailLogger email_logger({Logger::LogLevel::INFO});
  testing::internal::CaptureStdout();
  email_logger.Log(Logger::LogLevel::WARNING, "Hello");
  EXPECT_EQ("", testing::internal::GetCapturedStdout());
}

TEST(EmailLoggerTest, LogWithNextLogger) {
  std::set<Logger::LogLevel> levels = {Logger::LogLevel::INFO};
  EmailLogger main_logger(levels);
  main_logger.AddNext(std::make_unique<EmailLogger>(levels));

  testing::internal::CaptureStdout();
  main_logger.Log(Logger::LogLevel::INFO, "Hello");
  EXPECT_EQ("Emailing: Hello\nEmailing: Hello\n",
            testing::internal::GetCapturedStdout());
}
