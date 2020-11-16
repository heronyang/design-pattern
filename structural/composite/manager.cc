#include "manager.h"
#include <iostream>

Manager::Manager(std::string name) : name_(name) {}

void Manager::PerformTask(std::string task_name) {
  if (direct_reports_.size() == 0) {
    std::cout << name_ << ": My hands are tied." << std::endl;
    return;
  }

  std::cout << name_ << ": Assigning to direct reports." << std::endl;
  for (Employee *employee : direct_reports_) {
    employee->PerformTask(task_name);
  }
}

void Manager::AddDirectReport(Employee *direct_report) {
  direct_reports_.emplace_back(direct_report);
}
