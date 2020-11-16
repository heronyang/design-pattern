#ifndef ENGINEER_H_
#define ENGINEER_H_

#include "employee.h"

class Engineer : public Employee {
public:
  Engineer(std::string name);
  void PerformTask(std::string task_name) override;

private:
  std::string name_;
};

#endif
