#include "player.h"
#include "opponent.h"

#include "cpputils/graphics/image.h"

void Player::Draw(graphics::Image& image) {
  // Creates Player BMP
  int x = GetX();
  int y = GetY();
  if (x < 0) {
    x = 0;
  } else if ((x + GetWidth() - 1) >= 800) {
    x = 749;
  }
  if (y < 0) {
    y = 0;
  } else if ((y + GetHeight() - 1) >= 600) {
    y = 549;
  }
  image.DrawPolygon(
      {x + 20, y + 32, x + 22, y + 28, x + 12, y + 22, x + 10, y + 26}, 71, 69,
      69);
  image.DrawPolygon(
      {x + 30, y + 32, x + 28, y + 28, x + 38, y + 22, x + 40, y + 26}, 71, 69,
      69);
  image.DrawPolygon({x + 12, y + 22, x + 10, y + 10, x + 8, y + 24, x + 6,
                     y + 45, x + 5, y + 35, x + 10, y + 26},
                    116, 112, 112);
  image.DrawPolygon({x + 38, y + 22, x + 40, y + 10, x + 42, y + 24, x + 44,
                     y + 45, x + 45, y + 35, x + 40, y + 26},
                    116, 112, 112);
  image.DrawPolygon({x + 25, y + 2, x + 28, y + 5, x + 32, y + 30, x + 25,
                     y + 35, x + 18, y + 30, x + 22, y + 5},
                    116, 112, 112);
  image.DrawPolygon({x + 32, y + 30, x + 30, y + 40, x + 20, y + 40, x + 18,
                     y + 30, x + 25, y + 35},
                    100, 80, 80);
  image.DrawPolygon(
      {x + 22, y + 20, x + 24, y + 15, x + 26, y + 15, x + 28, y + 20, x + 28,
       y + 28, x + 26, y + 30, x + 24, y + 30, x + 22, y + 28},
      75, 187, 222);
  image.DrawRectangle(x + 23, y + 1, 1, 4, 255, 40, 40);
  image.DrawRectangle(x + 23, y + 5, 1, 4, 116, 42, 42);
  image.DrawRectangle(x + 27, y + 1, 1, 4, 255, 40, 40);
  image.DrawRectangle(x + 27, y + 5, 1, 4, 116, 42, 42);
  image.DrawRectangle(x + 20, y + 41, 11, 1, 53, 194, 202);
  image.DrawRectangle(x + 20, y + 42, 11, 1, 69, 235, 244);
}
void PlayerProjectile::Draw(graphics::Image& image) {
  // Creates Player Projectile BMP
  int x = GetX();
  int y = GetY();
  if (x < 0) {
    x = 0;
  } else if ((x + GetWidth() - 1) >= 800) {
    x = 794;
  }
  if (y < 0) {
    y = 0;
  } else if ((y + GetHeight() - 1) >= 600) {
    y = 594;
  }
  image.DrawLine(x + 1, y + 4, x + 1, y + 0, 255, 0, 0, 1);  // outside
  image.DrawLine(x + 3, y + 4, x + 3, y + 0, 255, 0, 0, 1);  // outside
}

bool Player::IntersectsWith(const Opponent& opponent) {
  int x = GetX() - 24;
  int y = GetY() - 24;
  int xlow = opponent.GetX() - 24;
  int xhigh = opponent.GetX() + 25;
  int ylow = opponent.GetY() - 24;
  int yhigh = opponent.GetY() + 25;
  if (((x >= xlow) && (x <= xhigh)) || ((y >= ylow) && (y <= yhigh))) {
    return true;
  } else {
    return false;
  }
}

bool PlayerProjectile::IntersectsWith(const Opponent& opponent) {
  int x = GetX() - 24;
  int y = GetY() - 24;
  int xlow = opponent.GetX() - 24;
  int xhigh = opponent.GetX() + 25;
  int ylow = opponent.GetY() - 24;
  int yhigh = opponent.GetY() + 25;
  if (((x >= xlow) && (x <= xhigh)) || ((y >= ylow) && (y <= yhigh))) {
    return true;
  } else {
    return false;
  }
}
