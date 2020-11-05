#ifndef MEMORY_CACHE_H
#define MEMORY_CACHE_H

#include "cache.h"

#include <map>

class MemoryCache : public Cache {
public:
  void Put(const std::string &key, const std::vector<std::byte> &data) override;
  std::vector<std::byte> Get(const std::string &key) const override;

private:
  std::map<std::string, std::vector<std::byte>> memory_store_;
};

#endif
