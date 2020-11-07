#include "student.h"
#include "gtest/gtest.h"
#include <string>

TEST(StudentTest, UpdateSucceed) {
  // We don't add the student as an observer of the website so it won't be
  // updated on new annoucement here, then we test if calling udpate() on a
  // student leads to an expected outcome.
  CourseWebsite course_website;
  course_website.PutAnnoucement("New assignment is released!");

  Student student(/*name=*/"John");
  testing::internal::CaptureStdout();
  student.Update(course_website);
  EXPECT_EQ("This is John. I just received an update from the course website "
            "saying: New assignment is released!\n",
            testing::internal::GetCapturedStdout());
}
