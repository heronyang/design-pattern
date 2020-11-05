#include "memory_cache.h"

void MemoryCache::Put(const std::string &key,
                      const std::vector<std::byte> &data) {
  memory_store_.emplace(key, data);
}

std::vector<std::byte> MemoryCache::Get(const std::string &key) const {
  return memory_store_.at(key);
}
