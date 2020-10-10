#include "gtest/gtest.h"
#include <memory>

#include "delivery.h"
#include "delivery_builder.h"

TEST(DeliveryBuilderTest, Build) {
  DeliveryBuilder delivery_builder;
  delivery_builder.AddPackage(std::make_unique<Package>("apple"));
  delivery_builder.AddPackage(std::make_unique<Package>("banana"));
  auto delivery = delivery_builder.Build();
  ASSERT_EQ(delivery->packages.size(), 2);
  ASSERT_EQ(delivery->packages.at(0).GetName(), "apple");
  ASSERT_EQ(delivery->packages.at(1).GetName(), "banana");
}

TEST(DeliveryBuilderTest, BuildNoPackage) {
  DeliveryBuilder delivery_builder;
  auto delivery = delivery_builder.Build();
  ASSERT_EQ(delivery->packages.size(), 0);
}
