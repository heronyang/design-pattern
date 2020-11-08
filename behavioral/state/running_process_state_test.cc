#include "process.h"
#include "running_process_state.h"
#include "gtest/gtest.h"

TEST(RunningProcessStateTest, Pause) {
  Process process;
  RunningProcessState process_state(process);
  process_state.Pause();
  EXPECT_EQ(Process::State::PAUSED, process.GetState());
}

TEST(RunningProcessStateTest, Stop) {
  Process process;
  RunningProcessState process_state(process);
  process_state.Stop();
  EXPECT_EQ(Process::State::STOPPED, process.GetState());
}
