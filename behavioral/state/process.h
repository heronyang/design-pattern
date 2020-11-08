#ifndef PROCESS_H_
#define PROCESS_H_

#include "process_state.h"
#include <map>
#include <memory>

class Process {
public:
  Process();

  void Start();
  void Pause();
  void Stop();

  enum State { UNDEFINED, RUNNING, PAUSED, STOPPED };
  void SetState(const State &state);
  State GetState() const;
  std::string GetStateReadable() const;

private:
  State current_state_;
  std::map<State, std::unique_ptr<ProcessState>> all_states_;
};

#endif
