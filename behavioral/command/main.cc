#include "game.h"

int main() {
  Game game(Game::ButtonLayout::A_ATTACK_B_DEFENSE);
  game.HandleButtonPressed(Game::Button::A);
  game.HandleButtonPressed(Game::Button::B);
  game.HandleButtonPressed(Game::Button::A);
  game.HandleButtonPressed(Game::Button::B);
  game.HandleButtonPressed(Game::Button::B);
  return 0;
}
