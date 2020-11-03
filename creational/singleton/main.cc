#include <iostream>

#include "config.h"

void RunFirstComponent() {
  Config& config = Config::getInstance();
  config.Set("database_url", "abc.edf.com");
}

void RunSecondComponent() {
  Config& config = Config::getInstance();
  std::cout << config.Get("database_url");
}

int main() {
  RunFirstComponent();
  RunSecondComponent();
  return 0;
}
