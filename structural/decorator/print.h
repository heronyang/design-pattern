#ifndef PRINT_H_
#define PRINT_H_

#include <iostream>

class Print {
public:
  virtual std::string GetDescription() = 0;
  virtual ~Print(){};
};

#endif
