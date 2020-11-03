#include "config.h"

#include <map>
#include <string>

std::string Config::Get(std::string key) const {
  if (key_values_.count(key) == 0) {
    return "";
  }
  return key_values_.at(key);
};

void Config::Set(std::string key, std::string value){
  key_values_.emplace(key, value);
};
