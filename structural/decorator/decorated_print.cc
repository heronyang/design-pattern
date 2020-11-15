#include "decorated_print.h"
#include <algorithm>
#include <iostream>
#include <memory>

DecoratedPrint::DecoratedPrint(std::unique_ptr<Print> wrappee)
    : wrappee_(std::move(wrappee)) {}

std::string DecoratedPrint::GetDescription() {
  return GetDecorationAdjective() + " " + wrappee_->GetDescription();
}
