#include "opponent.h"

void Opponent::Draw(graphics::Image& image) {
  // head of the enemy (roughly)
  int x = GetX() - 24;
  int y = GetY() - 24;
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
  image.DrawLine(x + 23, y + 24, x + 25, y + 24, 0, 0, 0, 1);
  image.DrawRectangle(x + 22, y + 15, 1, 1, 0, 0, 0);
  image.DrawRectangle(x + 26, y + 15, 1, 1, 0, 0, 0);
  image.DrawLine(x + 23, y + 15, x + 25, y + 15, 128, 0, 128, 1);
  image.DrawRectangle(x + 22, y + 16, 4, 3, 128, 0, 128);
  image.DrawLine(x + 21, y + 16, x + 21, y + 17, 0, 0, 0, 1);
  image.DrawLine(x + 27, y + 16, x + 27, y + 17, 0, 0, 0, 1);
  // major fills
  image.DrawRectangle(x + 21, y + 18, 2, 17, 128, 0, 128);
  image.DrawRectangle(x + 26, y + 18, 2, 17, 128, 0, 128);
  image.DrawRectangle(x + 20, y + 27, 9, 4, 128, 0, 128);
  image.DrawRectangle(x + 19, y + 25, 2, 4, 128, 0, 128);
  image.DrawRectangle(x + 28, y + 25, 2, 4, 128, 0, 128);
  image.DrawRectangle(x + 22, y + 33, 2, 4, 128, 0, 128);
  image.DrawRectangle(x + 25, y + 16, 2, 4, 128, 0, 128);
  image.DrawRectangle(x + 25, y + 33, 2, 4, 128, 0, 128);
  // outline (why did i make this creature so difficult to draw :(  )
  image.DrawLine(x + 20, y + 18, x + 20, y + 20, 0, 0, 0, 1);
  image.DrawLine(x + 19, y + 21, x + 19, y + 24, 0, 0, 0, 1);
  image.DrawLine(x + 28, y + 18, x + 28, y + 20, 0, 0, 0, 1);
  image.DrawLine(x + 21, y + 16, x + 21, y + 17, 0, 0, 0, 1);
  image.DrawLine(x + 29, y + 21, x + 29, y + 24, 0, 0, 0, 1);
  image.DrawLine(x + 16, y + 21, x + 16, y + 22, 0, 0, 0, 1);
  image.DrawLine(x + 17, y + 23, x + 17, y + 25, 0, 0, 0, 1);
  image.DrawLine(x + 19, y + 27, x + 19, y + 28, 0, 0, 0, 1);
  image.DrawLine(x + 20, y + 30, x + 20, y + 33, 0, 0, 0, 1);
  image.DrawLine(x + 32, y + 21, x + 32, y + 22, 0, 0, 0, 1);
  image.DrawLine(x + 31, y + 23, x + 31, y + 25, 0, 0, 0, 1);
  image.DrawLine(x + 29, y + 27, x + 29, y + 28, 0, 0, 0, 1);
  image.DrawLine(x + 28, y + 30, x + 28, y + 33, 0, 0, 0, 1);
  image.DrawLine(x + 24, y + 33, x + 24, y + 35, 0, 0, 0, 1);
  image.DrawLine(x + 23, y + 30, x + 23, y + 32, 0, 0, 0, 1);
  image.DrawLine(x + 25, y + 30, x + 25, y + 32, 0, 0, 0, 1);
  image.DrawRectangle(x + 24, y + 29, 3, 1, 0, 0, 0);
  image.DrawRectangle(x + 18, y + 26, 3, 1, 0, 0, 0);
  image.DrawRectangle(x + 30, y + 26, 3, 1, 0, 0, 0);
  image.DrawLine(x + 21, y + 34, x + 23, y + 36, 0, 0, 0, 1);
  image.DrawLine(x + 25, y + 37, x + 27, y + 34, 0, 0, 0, 1);
  image.DrawLine(x + 18, y + 29, x + 19, y + 30, 0, 0, 0, 1);
  image.DrawLine(x + 30, y + 29, x + 29, y + 30, 0, 0, 0, 1);
  image.DrawLine(x + 17, y + 20, x + 18, y + 21, 0, 0, 0, 1);
  image.DrawLine(x + 30, y + 21, x + 31, y + 20, 0, 0, 0, 1);
  image.DrawLine(x + 23, y + 25, x + 24, y + 26, 0, 0, 0, 1);
  image.DrawRectangle(x + 25, y + 25, 1, 1, 0, 0, 0);
  // misc. coloring
  image.DrawRectangle(x + 23, y + 26, 1, 1, 128, 0, 128);
  image.DrawRectangle(x + 25, y + 26, 1, 1, 128, 0, 128);
  image.DrawRectangle(x + 23, y + 35, 1, 1, 128, 0, 128);
  image.DrawRectangle(x + 25, y + 35, 1, 1, 128, 0, 128);
  image.DrawLine(x + 19, y + 29, x + 23, y + 29, 128, 0, 128, 1);
  image.DrawLine(x + 19, y + 29, x + 23, y + 29, 128, 0, 128, 1);
  image.DrawLine(x + 25, y + 29, x + 29, y + 29, 128, 0, 128, 1);
  image.DrawLine(x + 17, y + 21, x + 17, y + 22, 128, 0, 128, 1);
  image.DrawLine(x + 31, y + 21, x + 31, y + 22, 128, 0, 128, 1);
  image.DrawLine(x + 18, y + 22, x + 18, y + 25, 128, 0, 128, 1);
  image.DrawLine(x + 30, y + 22, x + 30, y + 25, 128, 0, 128, 1);
  image.DrawLine(x + 20, y + 21, x + 20, y + 24, 128, 0, 128, 1);
  image.DrawLine(x + 28, y + 21, x + 28, y + 24, 128, 0, 128, 1);
  image.DrawLine(x + 28, y + 21, x + 28, y + 24, 128, 0, 128, 1);
  image.DrawRectangle(x + 23, y + 19, 1, 1, 128, 0, 128);
  image.DrawRectangle(x + 25, y + 19, 1, 1, 128, 0, 128);
  // eye part
  image.DrawRectangle(x + 23, y + 20, 3, 5, 255, 255, 255);
  image.DrawRectangle(x + 24, y + 19, 1, 1, 255, 255, 255);
  image.DrawRectangle(x + 24, y + 25, 1, 1, 255, 255, 255);
  image.DrawLine(x + 24, y + 20, x + 24, y + 24, 255, 0, 0, 1);
  image.DrawLine(x + 24, y + 30, x + 24, y + 32, 255, 255, 255, 1);
}

void OpponentProjectile::Draw(graphics::Image& image) {
  // Creates Opponent Projectile BMP
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
  image.DrawLine(x + 1, y + 4, x + 1, y + 0, 0, 255, 0, 1);
  image.DrawLine(x + 3, y + 4, x + 3, y + 0, 0, 255, 0, 1);
}
