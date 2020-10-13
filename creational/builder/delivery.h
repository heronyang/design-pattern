#ifndef DELIVERY_H
#define DELIVERY_H

#include <vector>

#include "package.h"

class Delivery {
  public:
    const std::string GetSummary();
    std::vector<Package> packages;
};

#endif
