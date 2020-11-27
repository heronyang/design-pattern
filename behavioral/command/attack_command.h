#ifndef ATTACK_COMMAND_H_
#define ATTACK_COMMAND_H_

#include "command.h"

class AttackCommand : public Command {
public:
  void Execute() override;
};

#endif
