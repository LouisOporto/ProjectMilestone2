#include "opponent.h"
#include "cpputils/graphics/image.h"

void opponent::Draw(graphics::Image& game_screen) {
  graphics::Image my_image;
  my_image.Load("opponent.bmp")
  
}

void opponentProjectile::Draw(graphics::Image& game_screen) {
  graphics::Image my_image;
  my_image.Load("oprojectile.bmp")
}

bool opponent::IntersectWith(Player& player) {

}

bool opponentProjectile::IntersectWith(Player& player) {

}
