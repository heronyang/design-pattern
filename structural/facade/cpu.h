#ifndef CPU_H_
#define CPU_H_

class CPU {
public:
  void Freeze();
  void JumpTo(int position);
  void Execute();
};

#endif
