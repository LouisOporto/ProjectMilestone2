#ifndef PLAYER_H
#define PLAYER_H

#include "cpputils/graphics/image.h"

class Player {
 public:
  Player() {}
  Player(int x, int y, int kWidth, int kHeight)
        : x_(x), y_(y), kWidth_(kWidth), kHeight_(kHeight) {}
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
  bool IntersectWith(Opponent& opponent);
 private:
  int x_;
  int y_;
  int const kWidth_;
  int const kHeight_;
};

class PlayerProjectile {
 public:
  PlayerProjectile() {}
  PlayerProjectile(int x, int y, int kWidth, int kHeight)
        : x_(x), y_(y), kWidth_(kWidth), kHeight_(kHeight) {}
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
  bool IntersectWith(Opponent& opponent);
 private:
  int x_;
  int y_;
  int const kWidth_;
  int const kHeight_;
};
#endif
