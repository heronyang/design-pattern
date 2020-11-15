#include "photo.h"
#include "gtest/gtest.h"

TEST(PhotoTest, GetDescriptionSucceed) {
  Photo photo;
  EXPECT_EQ("Photo Print", photo.GetDescription());
}
