#ifndef VEHICLE_CAR_FACTORY_H
#define VEHICLE_CAR_FACTORY_H

#include "vehicle_factory.h"

#include "car.h"

class CarFactory : public VehicleFactory {
public:
  std::unique_ptr<Vehicle> Create() override { return CreateCar(); }
};

#endif
