#include "process.h"
#include "stopped_process_state.h"
#include "gtest/gtest.h"

TEST(StoppedProcessStateTest, Start) {
  Process process;
  StoppedProcessState process_state(process);
  process_state.Start();
  EXPECT_EQ(Process::State::RUNNING, process.GetState());
}
