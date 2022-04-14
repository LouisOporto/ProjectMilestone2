#ifndef OPPONENT_H
#define OPPONENT_H

#include "cpputils/graphics/image.h"

class Opponent {
 public:
  Opponent() : Opponent(0, 0) {}
  Opponent(int x, int y) : x_(x), y_(y) {}
  int GetX() const { return x_; }
  int GetY() const { return y_; }
  int GetWidth() { return kWidth_; }
  int GetHeight() { return kHeight_; }
  void SetX(int x) { x_ = x; }
  void SetY(int y) { y_ = y; }

  void Draw(graphics::Image& image);

 private:
  int x_;
  int y_;
  int const kWidth_ = 50;
  int const kHeight_ = 50;
};

class OpponentProjectile {
 public:
  OpponentProjectile() : OpponentProjectile(0, 0) {}
  OpponentProjectile(int x, int y) : x_(x), y_(y) {}
  int GetX() { return x_; }
  int GetY() { return y_; }
  int GetWidth() { return kWidth_; }
  int GetHeight() { return kHeight_; }
  void SetX(int x) { x_ = x; }
  void SetY(int y) { y_ = y; }
  void Draw(graphics::Image& image);

 private:
  int x_;
  int y_;
  int const kWidth_ = 5;
  int const kHeight_ = 5;
};
void DrawOp();
#endif
