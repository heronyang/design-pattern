#include "resume.h"

#include <iostream>

Resume::Resume() {
  std::cout << "Initializing a resume document." << std::endl;
}

Resume::Resume(const Resume &copied_from) {
  std::cout << "Copying a resume document." << std::endl;
}

void Resume::Load() { std::cout << "Resume is loaded." << std::endl; }
