#include "gtest/gtest.h"

#include "disk_cache.h"

TEST(DiskCacheTest, PutThenGetSucceed) {
  DiskCache disk_cache;
  const std::vector<std::byte> data = {std::byte{0xab}, std::byte{0xcd}};
  const std::string key = "dummy_key";
  disk_cache.Put(key, data);
  ASSERT_EQ(data, disk_cache.Get(key));
}
