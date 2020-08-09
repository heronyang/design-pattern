#ifndef VEHICLE_FAKE_VEHICLE_FACTORY_H
#define VEHICLE_FAKE_VEHICLE_FACTORY_H

#include "vehicle.h"
#include "vehicle_factory.h"

class FakeVehicleFactory : public VehicleFactory {
public:
  FakeVehicleFactory(std::unique_ptr<Vehicle> vehicle)
      : vehicle_(std::move(vehicle)) {}
  std::unique_ptr<Vehicle> Create() override { return std::move(vehicle_); }

private:
  std::unique_ptr<Vehicle> vehicle_;
};

#endif
