#ifndef PLAYER_H
#define PLAYER_H

#include "cpputils/graphics/image.h"
#include "opponent.h"
class Player {
 public:
  Player() : Player(0, 0) {}
  Player(int x, int y) : x_(x), y_(y) {}
  int GetX() { return x_; }
  int GetY() { return y_; }
  int GetWidth() { return kWidth_; }
  int GetHeight() { return kHeight_; }
  void SetX(int x) {
      x_ = x;
  }
  void SetY(int y) {
      y_ = y;
  }

  void Draw(graphics::Image& image);
  bool IntersectsWith(const Opponent& opponent);
 private:
  int x_;
  int y_;
  int const kWidth_ = 50;
  int const kHeight_ = 50;
};

class PlayerProjectile {
 public:
  PlayerProjectile() : PlayerProjectile(0, 0) {}
  PlayerProjectile(int x, int y) : x_(x), y_(y) {}
  int GetX() { return x_; }
  int GetY() { return y_; }
  int GetWidth() { return kWidth_; }
  int GetHeight() { return kHeight_; }
  void SetX(int x) {
      x_ = x;
  }
  void SetY(int y) {
      y_ = y;
  }
  void Draw(graphics::Image& image);
  bool IntersectsWith(const Opponent& opponent);
 private:
  int x_;
  int y_;
  int const kWidth_ = 5;
  int const kHeight_ = 5;
};
#endif

