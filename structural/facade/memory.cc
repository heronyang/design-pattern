#include "memory.h"
#include <iostream>
#include <ostream>

void Memory::Load(int position, std::vector<char> data) {
  std::cout << "Memory: Load data with size " << data.size() << " at "
            << position << "." << std::endl;
}
