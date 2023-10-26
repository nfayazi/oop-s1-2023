#include <tuple>

#include "Effect.h"
#include "GameEntity.h"

#ifndef EXPLOSION_H
#define EXPLOSION_H

class Explosion : public GameEntity, public Effect {
 protected:
 public:
  Explosion(int x, int y) : GameEntity(x, y, 'E') {}

  void apply(GameEntity& entity) override {
    position = std::make_tuple(-1, -1);
    type = 'X';
  }
};

#endif  // EXPLOSION_H