#include "engineer.h"
#include "manager.h"
#include "gtest/gtest.h"

TEST(ManagerTest, PerformTaskWithSomeDirectReports) {
  Manager emma("Emma");
  Engineer john("John");
  Engineer tommy("Tommy");
  emma.AddDirectReport(&john);
  emma.AddDirectReport(&tommy);

  testing::internal::CaptureStdout();
  emma.PerformTask("Build House");
  EXPECT_EQ("Emma: Assigning to direct reports.\nJohn: Working on \"Build "
            "House\".\nTommy: Working on \"Build House\".\n",
            testing::internal::GetCapturedStdout());
}

TEST(ManagerTest, PerformTaskWithNoDirectReports) {
  Manager emma("Emma");
  testing::internal::CaptureStdout();
  emma.PerformTask("Build House");
  EXPECT_EQ("Emma: My hands are tied.\n",
            testing::internal::GetCapturedStdout());
}
