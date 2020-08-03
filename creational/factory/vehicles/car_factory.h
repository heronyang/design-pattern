#ifndef VEHICLES_CAR_FACTORY_H
#define VEHICLES_CAR_FACTORY_H

#include "../vehicle_factory.h"

#include "car.h"

class CarFactory : public VehicleFactory {
public:
  std::unique_ptr<Vehicle> create() override { return CreateCar(); }
};

#endif
