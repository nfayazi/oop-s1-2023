#include "GameEntity.h"
#include "Utils.h"

#include <ctime>
#include <iostream>

using namespace std;

int main() {
    srand(static_cast<unsigned>(time(nullptr)));
    Utils util;

    int gridWidth = 10;
    int gridHeight = 10;

    // Generate random positions
    tuple<int, int> pos1 = util.generateRandomPos(gridWidth, gridHeight);
    tuple<int, int> pos2 = util.generateRandomPos(gridWidth, gridHeight);

    // Calculate distance between positions
    double distance = util.calculateDistance(pos1, pos2);

    cout << "Position 1: (" << get<0>(pos1) << ", " << get<1>(pos1) << ")" << endl;
    cout << "Position 2: (" << get<0>(pos2) << ", " << get<1>(pos2) << ")" << endl;
    cout << "Distance between positions: " << distance << endl;

    return 0;
}




