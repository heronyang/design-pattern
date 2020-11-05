#include "memory_cache.h"
#include "gtest/gtest.h"

TEST(MemoryCacheTest, PutThenGetSucceed) {
  MemoryCache memory_cache;
  const std::vector<std::byte> data = {std::byte{0xab}, std::byte{0xcd}};
  const std::string key = "dummy_key";
  memory_cache.Put(key, data);
  ASSERT_EQ(data, memory_cache.Get(key));
}
