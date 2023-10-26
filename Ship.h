#include "GameEntity.h"

#ifndef SHIP_H
#define SHIP_H

class Ship : public GameEntity {
 protected:
 public:
  Ship(int x, int y) : GameEntity(x, y, 'S') {}

  std::tuple<int, int> move(int dx, int dy) {
    position = std::make_tuple(dx, dy);
    return position;
  }

};

#endif  // SHIP_H