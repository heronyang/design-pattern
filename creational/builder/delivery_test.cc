#include "gtest/gtest.h"

#include "delivery.h"
#include "package.h"

TEST(DeliveryTest, GetSummary) {
  std::vector<Package> packages;
  packages.push_back(Package("apple"));
  packages.push_back(Package("banana"));
  packages.push_back(Package("cat"));

  Delivery delivery;
  delivery.packages = std::move(packages);

  ASSERT_EQ(delivery.GetSummary(), "Packages:\napple\nbanana\ncat\n");
}

