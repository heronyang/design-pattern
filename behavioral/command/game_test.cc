#include "game.h"
#include "gtest/gtest.h"
#include <gtest/internal/gtest-port.h>

using ::testing::internal::CaptureStdout;
using ::testing::internal::GetCapturedStdout;

TEST(GameTest, HandleButtonPressedWithLayoutAAttackBDefenseSucceed) {
  Game game(Game::ButtonLayout::A_ATTACK_B_DEFENSE);
  CaptureStdout();
  game.HandleButtonPressed(Game::Button::A);
  game.HandleButtonPressed(Game::Button::B);
  game.HandleButtonPressed(Game::Button::A);
  EXPECT_EQ("Attack!\nDefense!\nAttack!\n", GetCapturedStdout());
}

TEST(GameTest, HandleButtonPressedWithLayoutADefenseBAttackSucceed) {
  Game game(Game::ButtonLayout::A_DEFENSE_B_ATTACK);
  CaptureStdout();
  game.HandleButtonPressed(Game::Button::A);
  game.HandleButtonPressed(Game::Button::B);
  game.HandleButtonPressed(Game::Button::A);
  EXPECT_EQ("Defense!\nAttack!\nDefense!\n", GetCapturedStdout());
}
