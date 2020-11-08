#include "process_state.h"

#include <iostream>

void ProcessState::Start() {
  std::cerr << "Can't 'start' from the current state." << std::endl;
}

void ProcessState::Pause() {
  std::cerr << "Can't 'pause' from the current state." << std::endl;
}

void ProcessState::Stop() {
  std::cerr << "Can't 'stop' from the current state." << std::endl;
}
