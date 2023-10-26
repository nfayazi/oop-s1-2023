#include "Spot.h"

#ifndef PERSONA_H
#define PERSONA_H

class Persona : public Spot {


    public:
    Persona(int x, int y): Spot(x,y,'P'){}
    ~Persona(){}

    std::tuple<int, int> shift(int dx, int dy)
    {
        std::tuple<int, int> loc1;
        std::tuple<int, int> loc2;
        int dx = std::get<0>(loc1) - std::get<0>(loc2);
        int dy = std::get<1>(loc1) - std::get<1>(loc2);
            location = std::make_tuple(dx, dy);
            return location;
    }


};

#endif // PERSONA_H