#include "process.h"
#include <iostream>

void PrintProcessState(const Process &process) {
  std::cout << "Process State: " << process.GetStateReadable() << std::endl;
}

int main() {
  Process process;
  PrintProcessState(process);

  process.Start();
  PrintProcessState(process);

  process.Pause();
  PrintProcessState(process);

  process.Stop();
  PrintProcessState(process);

  // Pause the process while it's already stopped. Expect the action to be
  // ignored.
  process.Pause();
  PrintProcessState(process);

  return 0;
}
