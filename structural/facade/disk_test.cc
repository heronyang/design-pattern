#include "disk.h"
#include "gtest/gtest.h"

TEST(DiskTest, ReadSucceed) {
  testing::internal::CaptureStdout();
  Disk disk;
  std::vector<char> data = disk.Read(123, 5);
  std::string data_str(data.begin(), data.end());
  EXPECT_EQ("aaaaa", data_str);
  EXPECT_EQ("Disk: Read data with size 5 at 123.\n",
            testing::internal::GetCapturedStdout());
}
