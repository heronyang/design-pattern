#include "paused_process_state.h"
#include "process.h"
#include "gtest/gtest.h"

TEST(PausedProcessStateTest, Start) {
  Process process;
  PausedProcessState process_state(process);
  process_state.Start();
  EXPECT_EQ(Process::State::RUNNING, process.GetState());
}

TEST(PausedProcessStateTest, Stop) {
  Process process;
  PausedProcessState process_state(process);
  process_state.Stop();
  EXPECT_EQ(Process::State::STOPPED, process.GetState());
}
