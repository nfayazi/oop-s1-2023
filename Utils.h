#include <cmath>
#include <cstdlib>
#include <ctime>

#ifndef UTILS_H
#define UTILS_H

#include "GameEntity.h"

class Utils {
 public:
  static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight) {
    srand(time(0));
    int x = rand() % gridWidth;
    int y = rand() % gridHeight;
    return std::make_tuple(x, y);
  }

  static double calculateDistance(std::tuple<int, int> pos1,
                           std::tuple<int, int> pos2) {
    int dx = std::get<0>(pos1) - std::get<0>(pos2);
    int dy = std::get<1>(pos1) - std::get<1>(pos2);
    return std::sqrt(dx * dx + dy * dy);
  }
};

#endif  // UTILS_H