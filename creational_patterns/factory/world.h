#ifndef WORLD_H
#define WORLD_H

#include <memory>

#include "vehicle_factory.h"

/*
 * World contains a kind of vehicle and it moves the vehicle on `start()`.
 */
class World {
public:
  World(VehicleFactory &vehicle_factory);
  void start();

private:
  std::unique_ptr<Vehicle> vehicle_;
};

#endif
