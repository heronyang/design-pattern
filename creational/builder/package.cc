#include "package.h"

Package::Package(std::string name) : _name(name) {}

std::string Package::GetName() const { return _name; }
