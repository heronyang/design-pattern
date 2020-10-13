#include "gtest/gtest.h"
#include <memory>

#include "package.h"

TEST(PackageTest, GetName) {
  Package package("hello");
  ASSERT_EQ(package.GetName(), "hello");
}
