#include <iostream>

#include "opponent.h"
#include "player.h"

#include "cpputils/graphics/image.h"

int main() {
  graphics::Image game_screen(800, 600);
  Player player(400, 500);
  PlayerProjectile pprojectile(400, 445);
  Opponent opponent(400, 100);
  OpponentProjectile oprojectile(400, 155);

  player.Draw(game_screen);
  pprojectile.Draw(game_screen);
  opponent.Draw(game_screen);
  oprojectile.Draw(game_screen);
  player.IntersectsWith(opponent);
  pprojectile.IntersectsWith(opponent);

  game_screen.ShowUntilClosed();

  return 0;
}
