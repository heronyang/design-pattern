#include "game.h"
#include "attack_command.h"
#include "defense_command.h"
#include <memory>

Game::Game(ButtonLayout layout) {
  if (layout == ButtonLayout::A_ATTACK_B_DEFENSE) {
    button_layout_map_.emplace(Button::A, std::make_unique<AttackCommand>());
    button_layout_map_.emplace(Button::B, std::make_unique<DefenseCommand>());
  } else {
    button_layout_map_.emplace(Button::A, std::make_unique<DefenseCommand>());
    button_layout_map_.emplace(Button::B, std::make_unique<AttackCommand>());
  }
}

void Game::HandleButtonPressed(Button button) {
  button_layout_map_.at(button)->Execute();
}
