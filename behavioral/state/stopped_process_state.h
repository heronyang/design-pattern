#ifndef STOPPED_PROCESS_STATE_H_
#define STOPPED_PROCESS_STATE_H_

#include "process.h"
#include "process_state.h"

class StoppedProcessState : public ProcessState {
public:
  StoppedProcessState(Process &process);
  void Start() override;

private:
  Process &process_;
};

#endif
