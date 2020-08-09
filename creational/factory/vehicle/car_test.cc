#include "gtest/gtest.h"

#include "car.h"
#include "vehicle.h"

using ::testing::internal::CaptureStdout;
using ::testing::internal::GetCapturedStdout;

TEST(CarTest, Move) {
  std::unique_ptr<Vehicle> car = CreateCar();

  CaptureStdout();
  car->Move();
  EXPECT_EQ(GetCapturedStdout(), "Moving with 4 wheels.\n");
}
