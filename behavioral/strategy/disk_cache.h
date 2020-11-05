#ifndef DISK_CACHE_H
#define DISK_CACHE_H

#include "cache.h"

#include <string>
#include <vector>

class DiskCache : public Cache {
public:
  void Put(const std::string &key, const std::vector<std::byte> &data) override;
  std::vector<std::byte> Get(const std::string &key) const override;
  ~DiskCache();

private:
  std::vector<std::string> files_;
};

#endif
