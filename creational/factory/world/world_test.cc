#include "gtest/gtest.h"

#include <memory>

#include "../vehicle/fake_vehicle.h"
#include "../vehicle/fake_vehicle_factory.h"
#include "world.h"

TEST(WorldTest, Start) {
  auto vehicle = std::make_unique<FakeVehicle>();
  FakeVehicle *fake_vehicle = vehicle.get();
  FakeVehicleFactory vehicle_factory(std::move(vehicle));
  World world(vehicle_factory);
  world.Start();
  EXPECT_EQ(fake_vehicle->GetMoveCallCount(), 1);
}
