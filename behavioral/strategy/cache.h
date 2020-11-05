#ifndef CACHE_H
#define CACHE_H

#include <cstddef>
#include <string>
#include <vector>

class Cache {
public:
  virtual void Put(const std::string &key,
                   const std::vector<std::byte> &data) = 0;
  virtual std::vector<std::byte> Get(const std::string &key) const = 0;
};

#endif
