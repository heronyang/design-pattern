#ifndef PACKAGE_H
#define PACKAGE_H

#include <string>

class Package {
  public:
    Package(std::string name);
    std::string GetName() const;
  private:
    std::string _name;
};

#endif
