#include "computer.h"

const int kBootAddress = 100;
const int kBootSector = 200;
const int kSectorSize = 50;

void Computer::Start() {
  cpu_.Freeze();
  memory_.Load(kBootAddress, disk_.Read(kBootSector, kSectorSize));
  cpu_.JumpTo(kBootAddress);
  cpu_.Execute();
}
