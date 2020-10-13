#include "delivery_builder.h"
#include <memory>

DeliveryBuilder::DeliveryBuilder() : _delivery(std::make_unique<Delivery>()) {}

void DeliveryBuilder::AddPackage(std::unique_ptr<Package> package) {
  _delivery->packages.push_back(*package);
}

std::unique_ptr<Delivery> DeliveryBuilder::Build() {
  return std::move(_delivery);
}
