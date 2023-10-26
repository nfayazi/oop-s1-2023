#include "GameEntity.h"
#include "Utils.h"

#include "Explosion.h"
#include "Ship.h"
#include "Mine.h"
#include <iostream>
using namespace std;

int main(){
    Utils utils;
    Mine mine(3, 4);
    Ship ship(1, 2);
    std::tuple<int, int> pos1 = utils.generateRandomPos(10, 10);
    std::tuple<int, int> pos2 = utils.generateRandomPos(10, 10);

    double distance = utils.calculateDistance(pos1, pos2);

    std::cout << "Random Position 1: (" << std::get<0>(pos1) << ", " << std::get<1>(pos1) << ")\n";
    std::cout << "Random Position 2: (" << std::get<0>(pos2) << ", " << std::get<1>(pos2) << ")\n";
    std::cout << "Distance between positions: " << distance << std::endl;

    Explosion explosion = mine.explode();

    std::cout << "Mine type before explosion: " << mine.getType() << std::endl;
    std::cout << "Explosion type after explosion: " << explosion.getType() << std::endl;

    return 0;
}