#ifndef PAUSED_PROCESS_STATE_H_
#define PAUSED_PROCESS_STATE_H_

#include "process.h"
#include "process_state.h"

class PausedProcessState : public ProcessState {
public:
  PausedProcessState(Process &process);
  void Start() override;
  void Stop() override;

private:
  Process &process_;
};

#endif
