#include "car.h"

#include <iostream>
#include <memory>

namespace {

class Car : public Vehicle {
public:
  void Move() override {
    // Moves the car with 4 wheels.
    std::cout << "Moving with 4 wheels." << std::endl;
  }
};

} // namespace

std::unique_ptr<Vehicle> CreateCar() { return std::make_unique<Car>(); };
