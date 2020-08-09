#ifndef VEHICLE_BIKE_FACTORY_H
#define VEHICLE_BIKE_FACTORY_H

#include "vehicle_factory.h"

#include "bike.h"

class BikeFactory : public VehicleFactory {
public:
  BikeFactory(int wheel_size) : wheel_size_(wheel_size){};
  std::unique_ptr<Vehicle> Create() override { return CreateBike(wheel_size_); }

private:
  const int wheel_size_;
};

#endif
