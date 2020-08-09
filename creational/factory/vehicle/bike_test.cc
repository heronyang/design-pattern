#include "gtest/gtest.h"

#include "bike.h"
#include "vehicle.h"

using ::testing::internal::CaptureStdout;
using ::testing::internal::GetCapturedStdout;

TEST(BikeTest, Move) {
  std::unique_ptr<Vehicle> bike = CreateBike(/*wheel_size=*/20);

  CaptureStdout();
  bike->Move();
  EXPECT_EQ(GetCapturedStdout(),
      "Moving the bike with 2 wheels (size: 20).\n");
}
