#include "framed_print.h"

FramedPrint::FramedPrint(std::unique_ptr<Print> wrappee)
    : DecoratedPrint(std::move(wrappee)) {}

std::string FramedPrint::GetDescription() {
  return DecoratedPrint::GetDescription();
}

std::string FramedPrint::GetDecorationAdjective() { return "Framed"; }
