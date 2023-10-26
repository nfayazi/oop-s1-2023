#include "GameEntity.h"

#ifndef MINE_H
#define MINE_H

class Mine : public GameEntity {
 protected:
  // Explosion explosion;

 public:
  Mine(int x, int y) : GameEntity(x, y, 'M') {}

  Explosion explode() {
    return Explosion(std::get<0>(position), std::get<1>(position));
  }

};

#endif  // MINE_H