#include "Spot.h"
#include "Influence.h"
#include "Assists.h"

#include <tuple>
#include <iostream>
using namespace std;
class Spot;


int main(){
    Assists assist;

    int matrixWidth = 10;
    int matrixHeight = 10;

    tuple<int, int> loc1 = assist.createRandomLoc(matrixWidth, matrixHeight);
    tuple<int, int> loc2 = assist.createRandomLoc(matrixWidth,matrixHeight);

    double distance = assist.evaluateDistance(loc1, loc2);

    cout << "Location 1: (" << get<0>(loc1) << ", " << get<1>(loc1) << ")" << endl;
    cout << "Location 2: (" << get<0>(loc2) << ", " << get<1>(loc2) << ")" << endl;
    cout << "Distance between positions: " << distance << endl;

    return 0;
}
