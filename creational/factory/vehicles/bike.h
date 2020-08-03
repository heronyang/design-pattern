#ifndef VEHICLES_BIKE_H
#define VEHICLES_BIKE_H

#include "../vehicle.h"

#include <memory>

std::unique_ptr<Vehicle> CreateBike(int wheel_size);

#endif
