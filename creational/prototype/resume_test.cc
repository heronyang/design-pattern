#include "gtest/gtest.h"

#include "resume.h"

TEST(ResumeTest, InitResumeSucceed) {
  testing::internal::CaptureStdout();
  Resume resume;
  EXPECT_EQ("Initializing a resume document.\n", testing::internal::GetCapturedStdout());
}

TEST(ResumeTest, CopyResumeSucceed) {
  Resume copied_resume;
  testing::internal::CaptureStdout();
  Resume resume(copied_resume);
  EXPECT_EQ("Copying a resume document.\n", testing::internal::GetCapturedStdout());
}

TEST(ResumeTest, ResumeLoadSucceed) {
  Resume resume;
  testing::internal::CaptureStdout();
  resume.Load();
  EXPECT_EQ("Resume is loaded.\n", testing::internal::GetCapturedStdout());
}
