#include "disk_cache.h"
#include <algorithm>
#include <fstream>
#include <ios>
#include <iostream>
#include <string>

namespace {

std::vector<std::byte> chars2bytes(const std::vector<char> &chars) {
  std::vector<std::byte> bytes;
  for (char c : chars) {
    bytes.push_back((std::byte)c);
  }
  return bytes;
}

std::vector<char> bytes2chars(const std::vector<std::byte> &bytes) {
  std::vector<char> chars;
  for (std::byte b : bytes) {
    chars.push_back((char)b);
  }
  return chars;
}

} // namespace

void DiskCache::Put(const std::string &key,
                    const std::vector<std::byte> &data) {
  std::vector<char> data_chars = bytes2chars(data);
  std::ofstream ofs(key, std::ios::out | std::ios::binary);
  ofs.write(&data_chars[0], data.size());

  // Remembers the files we created so we can remove them at the end.
  files_.push_back(key);
}

std::vector<std::byte> DiskCache::Get(const std::string &key) const {
  std::basic_ifstream<char> ifs{key, std::ios::binary};
  std::vector<char> data{std::istreambuf_iterator<char>(ifs), {}};
  return chars2bytes(data);
}

DiskCache::~DiskCache() {
  for (std::string file : files_) {
    remove(file.c_str());
  }
}
