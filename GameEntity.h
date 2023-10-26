#include <tuple>

#ifndef GAMEENTITY_H
#define GAMEENTITY_H

class GameEntity {
 protected:
  std::tuple<int, int> position;
  char type;

 public:
  GameEntity(int x, int y, char Type) {
    position = std::make_tuple(x, y);
    type = Type;
  }
  virtual ~GameEntity(){}

  char getType() { return type; }

  std::tuple<int, int> getPos() { return position; }

};

#endif  // GAMEENTITY_H
