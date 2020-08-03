#ifndef VEHICAL_FACTORY_H
#define VEHICAL_FACTORY_H

#include "vehicle.h"

#include <memory>

/*
 * VehicleFactory creates a vehicle on `create()`. 
 */
class VehicleFactory {
public:
  virtual std::unique_ptr<Vehicle> create() = 0;
};

#endif
