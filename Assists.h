#ifndef ASSISTS_H
#define ASSISTS_H
#include "Spot.h"

class Assists {
    protected:
    std::tuple<int, int> location;
    
    public:
    static std::tuple<int, int> createRandomLoc(int matrixWidth, int matrixHeight)
    {
        location = std::make_tuple(matrixWidth, matrixHeight);
    }

    static double evaluateDistance(std::tuple<int, int> loc1, std::tuple<int, int> loc2)
    {
        int x = std::get<0> (loc1) - std::get<0>(loc2);
        int y = std::get<1> (loc2) - std::get<2>(loc2);
        std::make_tuple(x, y);
    }

};
#endif // ASSISTS_H