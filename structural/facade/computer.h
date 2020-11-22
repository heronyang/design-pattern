#ifndef COMPUTER_H_
#define COMPUTER_H_

#include "cpu.h"
#include "disk.h"
#include "memory.h"

class Computer {
public:
  void Start();

private:
  CPU cpu_;
  Memory memory_;
  Disk disk_;
};

#endif
