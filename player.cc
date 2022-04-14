#include "player.h"
#include "opponent.h"

#include "cpputils/graphics/image.h"

void Player::Draw(graphics::Image& image) {
  // Creates Player BMP
  graphics::Image player(50, 50);
  player.DrawPolygon({20, 32, 22, 28, 12, 22, 10, 26}, 71, 69, 69);
  player.DrawPolygon({30, 32, 28, 28, 38, 22, 40, 26}, 71, 69, 69);
  player.DrawPolygon({12, 22, 10, 10, 8, 24, 6, 45, 5, 35, 10, 26}, 116, 112,
                     112);
  player.DrawPolygon({38, 22, 40, 10, 42, 24, 44, 45, 45, 35, 40, 26}, 116, 112,
                     112);
  player.DrawPolygon({25, 2, 28, 5, 32, 30, 25, 35, 18, 30, 22, 5}, 116, 112,
                     112);
  player.DrawPolygon({32, 30, 30, 40, 20, 40, 18, 30, 25, 35}, 100, 80, 80);
  player.DrawPolygon(
      {22, 20, 24, 15, 26, 15, 28, 20, 28, 28, 26, 30, 24, 30, 22, 28}, 75, 187,
      222);
  player.DrawRectangle(23, 1, 1, 4, 255, 40, 40);
  player.DrawRectangle(23, 5, 1, 4, 116, 42, 42);
  player.DrawRectangle(27, 1, 1, 4, 255, 40, 40);
  player.DrawRectangle(27, 5, 1, 4, 116, 42, 42);
  player.DrawRectangle(20, 41, 11, 1, 53, 194, 202);
  player.DrawRectangle(20, 42, 11, 1, 69, 235, 244);
  int icon_width = player.GetWidth();
  int icon_height = player.GetHeight();
  int image_width = image.GetWidth();
  int image_height = image.GetHeight();
  int c_w, c_h;
  // Calculates center of images. Odd and Even
  if (icon_width % 2 == 0) {
    c_w = icon_width / 2;
  } else {
    c_w = (icon_width + 1) / 2;
  }
  if (icon_height % 2 == 0) {
    c_h = icon_height / 2;
  } else {
    c_h = (icon_height + 1) / 2;
  }
  for (int h = 0; h < icon_height; h++) {
    for (int w = 0; w < icon_width; w++) {
      int x_calc = x_ - c_w + w + 1;
      int y_calc = y_ - c_h + h + 1;
      if (x_calc >= image_width) {
        continue;
      }
      if (y_calc >= image_height) {
        continue;
      }
      if (x_calc < 0) {
        continue;
      }
      if (y_calc < 0) {
        continue;
      }
      graphics::Color set_pixel;
      set_pixel = player.GetColor(w, h);
      image.SetColor(x_calc, y_calc, set_pixel);
    }
  }
}
void PlayerProjectile::Draw(graphics::Image& image) {
  // Creates Player Projectile BMP
  graphics::Image p_projectile(5, 5);
  p_projectile.DrawLine(1, 4, 1, 0, 255, 0, 0, 1);  // outside
  p_projectile.DrawLine(3, 4, 3, 0, 255, 0, 0, 1);  // outside
  int icon_width = p_projectile.GetWidth();
  int icon_height = p_projectile.GetHeight();
  int image_width = image.GetWidth();
  int image_height = image.GetHeight();
  int c_w, c_h;
  // Calculates center of images. Odd and Even
  if (icon_width % 2 == 0) {
    c_w = icon_width / 2;
  } else {
    c_w = (icon_width + 1) / 2;
  }
  if (icon_height % 2 == 0) {
    c_h = icon_height / 2;
  } else {
    c_h = (icon_height + 1) / 2;
  }
  for (int h = 0; h < icon_height; h++) {
    for (int w = 0; w < icon_width; w++) {
      int x_calc = x_ - c_w + w + 1;
      int y_calc = y_ - c_h + h + 1;
      if (x_calc >= image_width) {
        continue;
      }
      if (y_calc >= image_height) {
        continue;
      }
      if (x_calc < 0) {
        continue;
      }
      if (y_calc < 0) {
        continue;
      }
      graphics::Color set_pixel;
      set_pixel = p_projectile.GetColor(w, h);
      image.SetColor(x_calc, y_calc, set_pixel);
    }
  }
}

bool Player::IntersectsWith(const Opponent& Opponent) {
  return true;
}

bool PlayerProjectile::IntersectsWith(const Opponent& Opponent) {
  return true;
}
