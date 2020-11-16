#include "engineer.h"
#include "gtest/gtest.h"

TEST(EngineerTest, PerformTaskSucceed) {
  Engineer john("John");
  testing::internal::CaptureStdout();
  john.PerformTask("Build House");
  EXPECT_EQ("John: Working on \"Build House\".\n",
            testing::internal::GetCapturedStdout());
}
