#include "memory.h"
#include "gtest/gtest.h"

TEST(MemoryTest, LaodSucceed) {
  testing::internal::CaptureStdout();
  Memory memory;
  std::string data = "apple";
  memory.Load(100, std::vector<char>(data.begin(), data.end()));
  EXPECT_EQ("Memory: Load data with size 5 at 100.\n",
            testing::internal::GetCapturedStdout());
}
