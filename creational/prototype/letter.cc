#include "letter.h"

#include <iostream>

Letter::Letter() {
  std::cout << "Initializing a letter document." << std::endl;
}

Letter::Letter(const Letter &copied_from) {
  std::cout << "Copying a letter document." << std::endl;
}

void Letter::Load() { std::cout << "Letter is loaded." << std::endl; }
