#ifndef VEHICAL_FAKE_VEHICAL_H
#define VEHICAL_FAKE_VEHICAL_H

#include "vehicle.h"

class FakeVehicle : public Vehicle {
public:
  void Move() override { ++move_call_count_; }
  int GetMoveCallCount() { return move_call_count_; }

private:
  int move_call_count_ = 0;
};

#endif
