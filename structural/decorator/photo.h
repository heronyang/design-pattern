#ifndef PHOTO_H_
#define PHOTO_H_

#include "print.h"
#include <iostream>

class Photo : public Print {
public:
  std::string GetDescription() override;
  ~Photo(){};
};

#endif
