#ifndef COMMAND_H_
#define COMMAND_H_

class Command {
public:
  virtual void Execute() = 0;
  virtual ~Command(){};
};

#endif
