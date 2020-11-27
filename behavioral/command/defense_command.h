#ifndef DEFENSE_COMMAND_H_
#define DEFENSE_COMMAND_H_

#include "command.h"

class DefenseCommand : public Command {
public:
  void Execute() override;
};

#endif
