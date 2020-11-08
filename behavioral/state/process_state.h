#ifndef PROCESS_STATE_H_
#define PROCESS_STATE_H_

class ProcessState {
public:
  virtual void Start();
  virtual void Pause();
  virtual void Stop();
};

#endif
