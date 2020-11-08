#include "gtest/gtest.h"
#include <gtest/internal/gtest-port.h>

#include "process_state.h"

using testing::internal::CaptureStderr;
using testing::internal::GetCapturedStderr;

TEST(ProcessStateTest, Start) {
  CaptureStderr();
  ProcessState process_state;
  process_state.Start();
  EXPECT_EQ("Can't 'start' from the current state.\n", GetCapturedStderr());
}

TEST(ProcessStateTest, Pause) {
  CaptureStderr();
  ProcessState process_state;
  process_state.Pause();
  EXPECT_EQ("Can't 'pause' from the current state.\n", GetCapturedStderr());
}

TEST(ProcessStateTest, Stop) {
  CaptureStderr();
  ProcessState process_state;
  process_state.Stop();
  EXPECT_EQ("Can't 'stop' from the current state.\n", GetCapturedStderr());
}
