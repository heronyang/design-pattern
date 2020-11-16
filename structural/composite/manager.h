#ifndef MANAGER_H_
#define MANAGER_H_

#include "employee.h"
#include <vector>

class Manager : public Employee {
public:
  Manager(std::string name);
  void PerformTask(std::string task_name) override;
  void AddDirectReport(Employee *direct_report);

private:
  std::string name_;
  std::vector<Employee *> direct_reports_;
};

#endif
