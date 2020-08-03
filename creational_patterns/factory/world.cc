#include "world.h"
#include "vehicle_factory.h"

World::World(VehicleFactory &vehicle_factory) {
  vehicle_ = vehicle_factory.create();
}

void World::start() { vehicle_->move(); }
