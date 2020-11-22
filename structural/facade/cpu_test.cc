#include "cpu.h"
#include "gtest/gtest.h"

TEST(CPUTest, FreezeSucceed) {
  testing::internal::CaptureStdout();
  CPU cpu;
  cpu.Freeze();
  EXPECT_EQ("CPU: Freeze.\n", testing::internal::GetCapturedStdout());
}

TEST(CPUTest, JumpToSucceed) {
  testing::internal::CaptureStdout();
  CPU cpu;
  cpu.JumpTo(100);
  EXPECT_EQ("CPU: Jump to position 100.\n",
            testing::internal::GetCapturedStdout());
}

TEST(CPUTest, ExecuteSucceed) {
  testing::internal::CaptureStdout();
  CPU cpu;
  cpu.Execute();
  EXPECT_EQ("CPU: Execute.\n", testing::internal::GetCapturedStdout());
}
