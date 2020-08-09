#ifndef VEHICAL_FACTORY_H
#define VEHICAL_FACTORY_H

#include "vehicle.h"

#include <memory>

/*
 * VehicleFactory creates a vehicle on `Create()`. 
 */
class VehicleFactory {
public:
  virtual std::unique_ptr<Vehicle> Create() = 0;
};

#endif
