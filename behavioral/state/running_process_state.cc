#include "running_process_state.h"

#include "process.h"
#include <iostream>

RunningProcessState::RunningProcessState(Process &process)
    : process_(process) {}

void RunningProcessState::Pause() { process_.SetState(Process::State::PAUSED); }
void RunningProcessState::Stop() { process_.SetState(Process::State::STOPPED); }
