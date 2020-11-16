#include "engineer.h"
#include <iostream>

Engineer::Engineer(std::string name) : name_(name){};

void Engineer::PerformTask(std::string task_name) {
  std::cout << name_ << ": Working on \"" << task_name << "\"." << std::endl;
}
