#include "gtest/gtest.h"

#include "letter.h"

TEST(LetterTest, InitLetterSucceed) {
  testing::internal::CaptureStdout();
  Letter letter;
  EXPECT_EQ("Initializing a letter document.\n", testing::internal::GetCapturedStdout());
}

TEST(LetterTest, CopyLetterSucceed) {
  Letter copied_letter;
  testing::internal::CaptureStdout();
  Letter letter(copied_letter);
  EXPECT_EQ("Copying a letter document.\n", testing::internal::GetCapturedStdout());
}

TEST(LetterTest, LetterLoadSucceed) {
  Letter letter;
  testing::internal::CaptureStdout();
  letter.Load();
  EXPECT_EQ("Letter is loaded.\n", testing::internal::GetCapturedStdout());
}
