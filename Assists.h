#ifndef ASSISTS_H
#define ASSISTS_H
#include "Spot.h"
#include <tuple>
#include <cstdlib>
#include <ctime>
#include <cmath>

class Assists {
    protected:
    std::tuple<int, int> location;
    
    public:
    static std::tuple<int, int> createRandomLoc(int matrixWidth, int matrixHeight)
    {
            srand(time(0));
    int x = rand() % matrixWidth;
    int y = rand() % matrixHeight;
    return std::make_tuple(x, y);
     }

    static double evaluateDistance(std::tuple<int, int> loc1, std::tuple<int, int> loc2)
    {
        int dx = std::get<0>(loc1) - std::get<0>(loc2);
        int dy = std::get<1>(loc1) - std::get<1>(loc2);
        return std::sqrt(dx * dx + dy * dy);
    }

};
#endif // ASSISTS_H