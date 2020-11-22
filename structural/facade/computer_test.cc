#include "computer.h"
#include "gtest/gtest.h"

TEST(ComputerTest, StartSucceed) {
  testing::internal::CaptureStdout();
  Computer computer;
  computer.Start();
  EXPECT_EQ(
      "CPU: Freeze.\nDisk: Read data with size 50 at 200.\nMemory: Load data "
      "with size 50 at 100.\nCPU: Jump to position 100.\nCPU: Execute.\n",
      testing::internal::GetCapturedStdout());
}
