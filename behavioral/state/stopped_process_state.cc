#include "stopped_process_state.h"

StoppedProcessState::StoppedProcessState(Process &process)
    : process_(process){};

void StoppedProcessState::Start() {
  process_.SetState(Process::State::RUNNING);
}
