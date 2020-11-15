#ifndef FRAMED_PRINT_H_
#define FRAMED_PRINT_H_

#include "decorated_print.h"
#include <iostream>
#include <memory>

class FramedPrint : public DecoratedPrint {
public:
  FramedPrint(std::unique_ptr<Print> wrappee);
  std::string GetDescription() override;
  std::string GetDecorationAdjective() override;
};

#endif
