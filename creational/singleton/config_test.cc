#include "gtest/gtest.h"

#include "config.h"

TEST(ConfigTest, GetEmptyValue) {
  Config& config = Config::getInstance();
  ASSERT_EQ("", config.Get("apple"));
}

TEST(ConfigTest, SetAndGetValue) {
  Config& config = Config::getInstance();
  config.Set("apple", "banana");
  ASSERT_EQ("banana", config.Get("apple"));
}
