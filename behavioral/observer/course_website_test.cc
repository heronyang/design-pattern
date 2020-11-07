#include "course_website.h"
#include "observer.h"
#include "gtest/gtest.h"

class FakeObserver : public Observer<CourseWebsite> {
public:
  void Update(const CourseWebsite &obserable) { update_count_++; }
  int GetUpdateCount() { return update_count_; }

private:
  int update_count_ = 0;
};

TEST(CourseWebsiteTest, GetEmptyAnnoucement) {
  CourseWebsite course_website;
  EXPECT_EQ("", course_website.GetAnnoucement());
}

TEST(CourseWebsiteTest, GetAndPutAnnoucement) {
  CourseWebsite course_website;
  course_website.PutAnnoucement("New assignment is released!");
  EXPECT_EQ("New assignment is released!", course_website.GetAnnoucement());
}

TEST(CourseWebsiteTest, UpdateObserverOnNewAnnoucement) {
  FakeObserver observer;
  CourseWebsite course_website;
  course_website.AddObserver(observer);

  course_website.PutAnnoucement("New assignment is released!");
  EXPECT_EQ(1, observer.GetUpdateCount());
}
