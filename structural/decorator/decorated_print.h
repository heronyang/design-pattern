#ifndef DECORATED_PRINT_H_
#define DECORATED_PRINT_H_

#include "print.h"
#include <iostream>
#include <memory>

class DecoratedPrint : public Print {
public:
  virtual std::string GetDescription() override;
  virtual std::string GetDecorationAdjective() = 0;

protected:
  DecoratedPrint(std::unique_ptr<Print> wrappee);

private:
  std::unique_ptr<Print> wrappee_;
};

#endif
