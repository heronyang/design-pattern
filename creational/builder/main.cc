#include <iostream>
#include <memory>
#include <optional>

#include "delivery.h"
#include "delivery_builder.h"

/**
 * ReceiveSimulatedPackage returns a fake package by randomly selecting a
 * package name.
 */
std::unique_ptr<Package> ReceiveSimulatedPackage() {
  std::vector<std::string> names = {"apple", "banana", "cat"};
  return std::make_unique<Package>(names[rand() % names.size()]);
}

int main() {
  DeliveryBuilder delivery_builder;

  {
    int package_count = 10;
    while (package_count--) {
      delivery_builder.AddPackage(ReceiveSimulatedPackage());
    }
  }

  std::unique_ptr<Delivery> delivery = delivery_builder.Build();
  std::cout << delivery->GetSummary();
}
