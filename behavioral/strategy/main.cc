#include "cache.h"
#include "disk_cache.h"
#include "memory_cache.h"
#include <iostream>
#include <memory>
#include <vector>

std::vector<std::byte> GetData() {
  // Returns some random data.
  return {std::byte{0xab}, std::byte{0xcd}};
}

std::unique_ptr<Cache> GetCache(int data_size) {
  if (data_size > 100) {
    return std::make_unique<DiskCache>();
  }
  return std::make_unique<MemoryCache>();
}

int main() {
  std::vector<std::byte> data = GetData();
  std::unique_ptr<Cache> cache = GetCache(data.size());

  cache->Put("my_data", data);
  std::cout << "Wrote data into cache with size = " << data.size() << std::endl;

  // After a while...
  std::vector<std::byte> retrieved_data = cache->Get("my_data");
  std::cout << "Retrieved data from cache with size = " << retrieved_data.size()
            << std::endl;

  return 0;
}
