#include "laminated_print.h"
#include <algorithm>
#include <memory>

LaminatedPrint::LaminatedPrint(std::unique_ptr<Print> wrappee)
    : DecoratedPrint(std::move(wrappee)) {}

std::string LaminatedPrint::GetDescription() {
  return DecoratedPrint::GetDescription();
}

std::string LaminatedPrint::GetDecorationAdjective() { return "Laminated"; }
