#ifndef WORLD_WORLD_H
#define WORLD_WORLD_H

#include <memory>

#include "../vehicle/vehicle_factory.h"

/*
 * World contains a kind of vehicle and it moves the vehicle on `Start()`.
 */
class World {
public:
  World(VehicleFactory &vehicle_factory);
  void Start();

private:
  std::unique_ptr<Vehicle> vehicle_;
};

#endif
