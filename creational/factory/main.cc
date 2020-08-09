#include <iostream>

#include "vehicle/bike_factory.h"
#include "vehicle/car_factory.h"
#include "world/world.h"

static const int kBikeWheelSize = 10;

void StartCarWorld() {
  std::cout << "[START CAR WORLD]" << std::endl;

  CarFactory car_factory;
  World world(car_factory);
  world.Start();

  std::cout << "[END CAR WORLD]" << std::endl;
}

void StartBikeWorld() {
  std::cout << "[START BIKE WORLD]" << std::endl;

  BikeFactory bike_factory(kBikeWheelSize);
  World world(bike_factory);
  world.Start();

  std::cout << "[START BIKE WORLD]" << std::endl;
}

int main() {
  StartCarWorld();
  StartBikeWorld();
}
