#include "disk.h"
#include <iostream>

std::vector<char> Disk::Read(int address, int size) {
  std::vector<char> data;
  std::cout << "Disk: Read data with size " << size << " at " << address << "."
            << std::endl;
  for (int i = 0; i < size; i++) {
    // Returns some fake data here.
    data.push_back('a');
  }
  return data;
}
