#ifndef CONFIG_H
#define CONFIG_H

#include <map>
#include <string>

class Config {
public:
  Config(Config const &) = delete;
  void operator=(Config const &) = delete;

  static Config &getInstance() {
    static Config instance;
    return instance;
  }

  std::string Get(std::string key) const;
  void Set(std::string key, std::string value);

private:
  Config() {};
  std::map<std::string, std::string> key_values_;
};

#endif
