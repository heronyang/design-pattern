#include "bike.h"

#include <iostream>
#include <memory>

namespace {

class Bike : public Vehicle {
public:
  Bike(int wheel_size) : wheel_size_(wheel_size) {}

  void Move() override {
    std::cout << "Moving the bike with 2 wheels (size: " << wheel_size_ << ")."
              << std::endl;
  }

private:
  const int wheel_size_;
};

} // namespace

std::unique_ptr<Vehicle> CreateBike(int wheel_size) {
  return std::make_unique<Bike>(wheel_size);
}
