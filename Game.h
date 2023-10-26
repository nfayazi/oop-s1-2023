#include <vector>

#include "Explosion.h"
#include "GameEntity.h"
#include "Effect.h"
#include "Mine.h"
#include "Ship.h"
#include "Utils.h"

class Game {
 private:
  std::vector<GameEntity*> entities;

 public:
  Game() {}

  std::vector<GameEntity*> get_entities() { return entities; }

  void set_entities(std::vector<GameEntity*> ents) { entities = ents; }

  std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth,
                                    int gridHeight) {
    for (GameEntity* entity : entities) {
      delete entity;
    }
    entities.clear();

    for (int i = 0; i < numShips; i++) {
      std::tuple<int, int> pos =
          Utils::generateRandomPos(gridWidth, gridHeight);
      Ship* ship = new Ship(std::get<0>(pos), std::get<1>(pos));
      entities.push_back(ship);
    }

    for (int i = 0; i < numMines; i++) {
      std::tuple<int, int> pos =
          Utils::generateRandomPos(gridWidth, gridHeight);
      Mine* mine = new Mine(std::get<0>(pos), std::get<1>(pos));
      entities.push_back(mine);
    }
    return entities;
  }

  void gameLoop(int maxIterations, double mineDistanceThreshold) {
    for (int i = 0; i < maxIterations; i++) {
      for (GameEntity* entity : entities) {
        if (entity->getType() == 'S') {
          Ship* ship = dynamic_cast<Ship*>(entity);
          ship->move(1, 0);
          for (GameEntity* otherEntity : entities) {
            if (otherEntity->getType() == 'M') {
              Mine* mine = dynamic_cast<Mine*>(otherEntity);
              if (Utils::calculateDistance(ship->getPos(), mine->getPos()) <=
                  mineDistanceThreshold) {
                mine->explode();
                entities.erase(
                    std::remove(entities.begin(), entities.end(), mine),
                    entities.end());
                delete mine;
              }
            }
          }
        }
      }
      bool destroyed = true;
      for (GameEntity* entity : entities) {
        if (entity->getType() == 'S') {
          destroyed = false;
          break;
        }
      }
      if (destroyed) {
        break;
      }
    }
  }
};