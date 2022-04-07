#include "opponent.h"

void Opponent::Draw(graphics::Image& image) {
  graphics::Image my_image(50,50);
  // head of the enemy (roughly)
  my_image.DrawLine(23, 24, 25, 24, 0, 0, 0, 1);
  my_image.DrawRectangle(22, 15, 1, 1, 0, 0, 0);
  my_image.DrawRectangle(26, 15, 1, 1, 0, 0, 0);
  my_image.DrawLine(23, 15, 25, 15, 128, 0, 128, 1);
  my_image.DrawRectangle(22, 16, 4, 3, 128, 0, 128);
  my_image.DrawLine(21, 16, 21, 17, 0, 0, 0, 1);
  my_image.DrawLine(27, 16, 27, 17, 0, 0, 0, 1);
  // major fills
  my_image.DrawRectangle(21, 18, 2, 17, 128, 0, 128);
  my_image.DrawRectangle(26, 18, 2, 17, 128, 0, 128);
  my_image.DrawRectangle(20, 27, 9, 4, 128, 0, 128);
  my_image.DrawRectangle(19, 25, 2, 4, 128, 0, 128);
  my_image.DrawRectangle(28, 25, 2, 4, 128, 0, 128);
  my_image.DrawRectangle(22, 33, 2, 4, 128, 0, 128);
  my_image.DrawRectangle(25, 16, 2, 4, 128, 0, 128);
  my_image.DrawRectangle(25, 33, 2, 4, 128, 0, 128);
  // outline (why did i make this creature so difficult to draw :(  )
  my_image.DrawLine(20, 18, 20, 20, 0, 0, 0, 1);
  my_image.DrawLine(19, 21, 19, 24, 0, 0, 0, 1);
  my_image.DrawLine(28, 18, 28, 20, 0, 0, 0, 1);
  my_image.DrawLine(21, 16, 21, 17, 0, 0, 0, 1);
  my_image.DrawLine(29, 21, 29, 24, 0, 0, 0, 1);
  my_image.DrawLine(16, 21, 16, 22, 0, 0, 0, 1);
  my_image.DrawLine(17, 23, 17, 25, 0, 0, 0, 1);
  my_image.DrawLine(19, 27, 19, 28, 0, 0, 0, 1);
  my_image.DrawLine(20, 30, 20, 33, 0, 0, 0, 1);
  my_image.DrawLine(32, 21, 32, 22, 0, 0, 0, 1);
  my_image.DrawLine(31, 23, 31, 25, 0, 0, 0, 1);
  my_image.DrawLine(29, 27, 29, 28, 0, 0, 0, 1);
  my_image.DrawLine(28, 30, 28, 33, 0, 0, 0, 1);
  my_image.DrawLine(24, 33, 24, 35, 0, 0, 0, 1);
  my_image.DrawLine(23, 30, 23, 32, 0, 0, 0, 1);
  my_image.DrawLine(25, 30, 25, 32, 0, 0, 0, 1);
  my_image.DrawRectangle(24, 29, 3, 1, 0, 0, 0);
  my_image.DrawRectangle(18, 26, 3, 1, 0, 0, 0);
  my_image.DrawRectangle(30, 26, 3, 1, 0, 0, 0);
  my_image.DrawLine(21, 34, 23, 36, 0, 0, 0, 1);
  my_image.DrawLine(25, 37, 27, 34, 0, 0, 0, 1);
  my_image.DrawLine(18, 29, 19, 30, 0, 0, 0, 1);
  my_image.DrawLine(30, 29, 29, 30, 0, 0, 0, 1);
  my_image.DrawLine(17, 20, 18, 21, 0, 0, 0, 1);
  my_image.DrawLine(30, 21, 31, 20, 0, 0, 0, 1);
  my_image.DrawLine(23, 25, 24, 26, 0, 0, 0, 1);
  my_image.DrawRectangle(25, 25, 1, 1, 0, 0, 0);
  // misc. coloring
  my_image.DrawRectangle(23, 26, 1, 1, 128, 0, 128);
  my_image.DrawRectangle(25, 26, 1, 1, 128, 0, 128);
  my_image.DrawRectangle(23, 35, 1, 1, 128, 0, 128);
  my_image.DrawRectangle(25, 35, 1, 1, 128, 0, 128);
  my_image.DrawLine(19, 29, 23, 29, 128, 0, 128, 1);
  my_image.DrawLine(19, 29, 23, 29, 128, 0, 128, 1);
  my_image.DrawLine(25, 29, 29, 29, 128, 0, 128, 1);
  my_image.DrawLine(17, 21, 17, 22, 128, 0, 128, 1);
  my_image.DrawLine(31, 21, 31, 22, 128, 0, 128, 1);
  my_image.DrawLine(18, 22, 18, 25, 128, 0, 128, 1);
  my_image.DrawLine(30, 22, 30, 25, 128, 0, 128, 1);
  my_image.DrawLine(20, 21, 20, 24, 128, 0, 128, 1);
  my_image.DrawLine(28, 21, 28, 24, 128, 0, 128, 1);
  my_image.DrawLine(28, 21, 28, 24, 128, 0, 128, 1);
  my_image.DrawRectangle(23, 19, 1, 1, 128, 0, 128);
  my_image.DrawRectangle(25, 19, 1, 1, 128, 0, 128);
  // eye part
  my_image.DrawRectangle(23, 20, 3, 5, 255, 255, 255);
  my_image.DrawRectangle(24, 19, 1, 1, 255, 255, 255);
  my_image.DrawRectangle(24, 25, 1, 1, 255, 255, 255);
  my_image.DrawLine(24, 20, 24, 24, 255, 0, 0, 1);
  my_image.DrawLine(24, 30, 24, 32, 255, 255, 255, 1);
  
  int icon_width = my_image.GetWidth();
  int icon_height = my_image.GetHeight();
  int image_width = 800;
  int image_height = 600;
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
      set_pixel = my_image.GetColor(w, h);
      image.SetColor(x_calc, y_calc, set_pixel);
    }
  }
}

void OpponentProjectile::Draw(graphics::Image& image) {
  // Creates Opponent Projectile BMP
  graphics::Image oProjectile(5, 5);
  oProjectile.DrawLine(1, 4, 1, 0, 0, 255, 0, 1);
  oProjectile.DrawLine(3, 4, 3, 0, 0, 255, 0, 1);
  int icon_width = kWidth_;
  int icon_height = kHeight_;
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
      set_pixel = oProjectile.GetColor(w, h);
      image.SetColor(x_calc, y_calc, set_pixel);
    }
  }
}
