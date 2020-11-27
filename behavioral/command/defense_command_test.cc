#include "defense_command.h"
#include "gtest/gtest.h"

using ::testing::internal::CaptureStdout;
using ::testing::internal::GetCapturedStdout;

TEST(DefenseCommandTest, ExecuteSucceed) {
  DefenseCommand command;
  CaptureStdout();
  command.Execute();
  EXPECT_EQ("Defense!\n", GetCapturedStdout());
}
