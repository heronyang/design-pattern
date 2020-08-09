#include "world.h"
#include "../vehicle/vehicle_factory.h"

World::World(VehicleFactory &vehicle_factory) {
  vehicle_ = vehicle_factory.Create();
}

void World::Start() { vehicle_->Move(); }
