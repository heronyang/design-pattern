#ifndef DISK_H_
#define DISK_H_

#include <vector>

class Disk {
public:
  std::vector<char> Read(int address, int size);
};

#endif
