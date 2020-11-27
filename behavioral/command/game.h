#ifndef GAME_H_
#define GAME_H_

#include "command.h"
#include <map>

class Game {
public:
  enum Button { A, B };
  enum ButtonLayout { A_ATTACK_B_DEFENSE, A_DEFENSE_B_ATTACK };

  Game(ButtonLayout layout);
  void HandleButtonPressed(Button button);

private:
  std::map<Button, std::unique_ptr<Command>> button_layout_map_;
};

#endif
