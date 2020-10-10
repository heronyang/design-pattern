#ifndef DELIVERY_BUILDER_H
#define DELIVERY_BUILDER_H

#include <memory>

#include "delivery.h"
#include "package.h"

class DeliveryBuilder {
public:
  DeliveryBuilder();
  void AddPackage(std::unique_ptr<Package> package);
  std::unique_ptr<Delivery> Build();

private:
  std::unique_ptr<Delivery> _delivery;
};

#endif
