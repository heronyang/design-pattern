#include <iostream>

#include "vehicles/bike_factory.h"
#include "vehicles/car_factory.h"
#include "world.h"

static const int kBikeWheelSize = 10;

void startBikeWorld() {
  std::cout << "[START BIKE WORLD]" << std::endl;

  CarFactory car_factory;
  World world(car_factory);
  world.start();

  std::cout << "[END BIKE WORLD]" << std::endl;
}

void startCarWorld() {
  std::cout << "[START CAR WORLD]" << std::endl;

  BikeFactory bike_factory(kBikeWheelSize);
  World world(bike_factory);
  world.start();

  std::cout << "[START BIKE WORLD]" << std::endl;
}

int main() {
  startBikeWorld();
  startCarWorld();
}
