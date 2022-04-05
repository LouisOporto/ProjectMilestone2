#include "player.h"
#include "cpputils/graphics/image.h"

void Player::Draw(graphics::Image& game_screen) {
  graphics::Image my_image;
  my_image.Load("player.bmp")
  
}

void PlayerProjectile::Draw(graphics::Image& game_screen) {
  graphics::Image my_image;
  my_image.Load("pprojectile.bmp")
}

bool Player::IntersectWith(Opponent& opponent) {

}

bool PlayerProjectile::IntersectWith(Opponent& opponent) {

}
