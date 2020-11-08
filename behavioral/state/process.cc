#include "process.h"
#include "paused_process_state.h"
#include "running_process_state.h"
#include "stopped_process_state.h"
#include <iostream>
#include <memory>

Process::Process() : current_state_(State::STOPPED) {
  all_states_.emplace(State::RUNNING,
                      std::make_unique<RunningProcessState>(*this));
  all_states_.emplace(State::PAUSED,
                      std::make_unique<PausedProcessState>(*this));
  all_states_.emplace(State::STOPPED,
                      std::make_unique<StoppedProcessState>(*this));
}

void Process::SetState(const State &state) {
  if (all_states_.count(state) == 0) {
    std::cerr << "Trying to set an unknown state, skipped." << std::endl;
    return;
  }
  current_state_ = state;
}

Process::State Process::GetState() const { return current_state_; }

std::string Process::GetStateReadable() const {
  std::map<State, std::string> readable_state_name = {
      {State::UNDEFINED, "UNDEFINED"},
      {State::RUNNING, "RUNNING"},
      {State::PAUSED, "PAUSED"},
      {State::STOPPED, "STOPPED"},
  };
  return readable_state_name.at(current_state_);
}

void Process::Start() { all_states_.at(current_state_)->Start(); }

void Process::Pause() { all_states_.at(current_state_)->Pause(); }

void Process::Stop() { all_states_.at(current_state_)->Stop(); }
