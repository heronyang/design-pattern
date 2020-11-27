#include "attack_command.h"
#include "gtest/gtest.h"

using ::testing::internal::CaptureStdout;
using ::testing::internal::GetCapturedStdout;

TEST(AttackCommandTest, ExecuteSucceed) {
  AttackCommand command;
  CaptureStdout();
  command.Execute();
  EXPECT_EQ("Attack!\n", GetCapturedStdout());
}
