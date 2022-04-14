#include "opponent.h"

void Opponent::Draw(graphics::Image& op_image)
{
  //define size
  const int op_size = 50;

  //graphics image
  //graphics::Image op_image(op_size, op_size);

  //base of pic
  op_image.DrawCircle(op_size/2, op_size/2, op_size/3, 0,0,0);
  op_image.DrawPolygon({25,20,10,5,10,30}, 0,0,0,0);
  op_image.DrawPolygon({25,20,40,5,40,30}, 0,0,0,0);
  
  //eyes
  op_image.DrawCircle(18, 20, 2,255,0,0,0);
  op_image.DrawCircle(32, 20, 2,255,0,0,0);

  //mouth
  op_image.DrawPolygon({25,25,20,32,30,32}, 243,0,0,0);

  op_image.SaveImageBmp(op_img_file);
  // head of the enemy (roughly)
  
/*int x = GetX() - 24;
  int y = GetY() - 24;
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
  image.DrawRectangle(x + 25, y + 25, 1, 1, 0, 0, 0);;
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
  */

}

void OpponentProjectile::Draw(graphics::Image& image) {
  image.DrawRectangle(x_, y_, 2, 2, kOrange);
  image.DrawRectangle(x_+3, y_, 2, 2, kOrange);
  image.DrawRectangle(x_+3, y_+3, 2, 2, kOrange);
  image.DrawRectangle(x_, y_+3, 2, 2, kOrange);
  
  // Creates Opponent Projectile BMP
 /* graphics::Image oProjectile(5, 5);
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
  }*/
}

void PadPoints(std::vector<int> &points, int pad_x, int pad_y)
{
   for(int i = 0; i < points.size(); i++)
   {
     if(i % 2 == 0)
     {
       points[i] += pad_x;
     }
    else
    {
      points[i] += pad_y;
    }
   }
}

void SaveFile(Opponent enemy)
{
  std::string file_name;
  std::cout << "Enter a file name for the opponent";
  std::cin >> file_name;
  enemy.SetX(0);
  enemy.SetY(0);

  graphics::Image e_img(50,50);
  enemy.Draw(e_img);

  e_img.SaveImageBmp(file_name);
