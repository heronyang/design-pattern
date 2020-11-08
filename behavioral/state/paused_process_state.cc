#include "paused_process_state.h"

PausedProcessState::PausedProcessState(Process &process) : process_(process) {}

void PausedProcessState::Start() { process_.SetState(Process::State::RUNNING); }
void PausedProcessState::Stop() { process_.SetState(Process::State::STOPPED); }
