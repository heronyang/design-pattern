#ifndef RUNNING_PROCESS_STATE_
#define RUNNING_PROCESS_STATE_

#include "process.h"
#include "process_state.h"

class RunningProcessState : public ProcessState {
public:
  RunningProcessState(Process &process);

  void Pause() override;
  void Stop() override;

private:
  Process &process_;
};

#endif
