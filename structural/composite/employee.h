#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include <string>

class Employee {
public:
  virtual void PerformTask(std::string task_name) = 0;
};

#endif
