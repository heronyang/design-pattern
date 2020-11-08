#include "process.h"
#include "gtest/gtest.h"

TEST(ProcessTest, GetInitialStateSucceed) {
  Process process;
  EXPECT_EQ(Process::State::STOPPED, process.GetState());
}

TEST(ProcessTest, SetAndGetStateSucceed) {
  Process process;
  process.SetState(Process::State::RUNNING);
  EXPECT_EQ(Process::State::RUNNING, process.GetState());
}

TEST(ProcessTest, SetInvalidState) {
  Process process;
  process.SetState(Process::State::RUNNING);
  process.SetState(Process::State::UNDEFINED);
  EXPECT_EQ(Process::State::RUNNING, process.GetState());
}

TEST(ProcessTest, StartFromRunning) {
  Process process;
  process.SetState(Process::State::RUNNING);
  process.Start();
  EXPECT_EQ(Process::State::RUNNING, process.GetState());
}

TEST(ProcessTest, StartFromStopped) {
  Process process;
  process.SetState(Process::State::STOPPED);
  process.Start();
  EXPECT_EQ(Process::State::RUNNING, process.GetState());
}

TEST(ProcessTest, StartFromPaused) {
  Process process;
  process.SetState(Process::State::PAUSED);
  process.Start();
  EXPECT_EQ(Process::State::RUNNING, process.GetState());
}

TEST(ProcessTest, PauseFromRunning) {
  Process process;
  process.SetState(Process::State::RUNNING);
  process.Pause();
  EXPECT_EQ(Process::State::PAUSED, process.GetState());
}

TEST(ProcessTest, PauseFromStopped) {
  Process process;
  process.SetState(Process::State::STOPPED);
  process.Pause();
  // You can't 'pause' from a stopped state.
  EXPECT_EQ(Process::State::STOPPED, process.GetState());
}

TEST(ProcessTest, PauseFromPaused) {
  Process process;
  process.SetState(Process::State::PAUSED);
  process.Pause();
  EXPECT_EQ(Process::State::PAUSED, process.GetState());
}

TEST(ProcessTest, StopFromRunning) {
  Process process;
  process.SetState(Process::State::RUNNING);
  process.Stop();
  EXPECT_EQ(Process::State::STOPPED, process.GetState());
}

TEST(ProcessTest, StopFromStopped) {
  Process process;
  process.SetState(Process::State::STOPPED);
  process.Stop();
  EXPECT_EQ(Process::State::STOPPED, process.GetState());
}

TEST(ProcessTest, StopFromPaused) {
  Process process;
  process.SetState(Process::State::PAUSED);
  process.Stop();
  EXPECT_EQ(Process::State::STOPPED, process.GetState());
}

TEST(ProcessTest, GetStateReadableSucceed) {
  Process process;
  process.SetState(Process::State::PAUSED);
  EXPECT_EQ("PAUSED", process.GetStateReadable());
}
