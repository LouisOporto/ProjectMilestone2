#include <iostream>

#include "player.h"
#include "opponent.h"

#include "cpputils/graphics/image.h"

int main() {
  // Creates Game Screen
  graphics::Image game_screen (800, 600);
  
  int x, y;
  std::cout << "Set position of player:\nx = ";
  std::cin >> x;
  std::cout << "y = ";
  std::cin >> y;
  Player Player(x, y);
  Player.Draw(game_screen);
  std::cout << "Set position of player projectile:\nx = ";
  std::cin >> x;
  std::cout << "y = ";
  std::cin >> y;
  PlayerProjectile pprojectile(x, y);
  pprojectile.Draw(game_screen);
  std::cout << "Set position of opponent:\nx = ";
  std::cin >> x;
  std::cout << "y = ";
  std::cin >> y;
  Opponent Opponent(x, y);
  Opponent.Draw(game_screen);
  std::cout << "Set position of opponent projectile:\nx = ";
  std::cin >> x;
  std::cout << "y = ";
  std::cin >> y;
  OpponentProjectile oprojectile(x, y);
  oprojectile.Draw(game_screen);
  Player.IntersectsWith(Opponent);
  pprojectile.IntersectsWith(Opponent);

  game_screen.ShowUntilClosed();
return 0;
}
