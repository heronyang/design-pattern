#ifndef LAMINATED_PRINT_H_
#define LAMINATED_PRINT_H_

#include "decorated_print.h"

class LaminatedPrint : public DecoratedPrint {
public:
  LaminatedPrint(std::unique_ptr<Print> wrappee);
  std::string GetDescription() override;
  std::string GetDecorationAdjective() override;
};

#endif
