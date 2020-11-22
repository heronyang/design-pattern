#include "cpu.h"
#include <iostream>

void CPU::Freeze() { std::cout << "CPU: Freeze." << std::endl; }

void CPU::JumpTo(int position) {
  std::cout << "CPU: Jump to position " << position << "." << std::endl;
}

void CPU::Execute() { std::cout << "CPU: Execute." << std::endl; }
