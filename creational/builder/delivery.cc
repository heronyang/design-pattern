#include <sstream>

#include "delivery.h"

const std::string Delivery::GetSummary() {
  std::stringstream ss;
  ss << "Packages:\n";
  for (const Package &package : packages) {
    ss << package.GetName() << std::endl;
  }
  return ss.str();
}
