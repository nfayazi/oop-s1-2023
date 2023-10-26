#include <tuple>

#ifndef SPOT_H

#define SPOT_H

class Spot {
    protected:
std::tuple<int, int> location;
char category;

    public:
    Spot(int x, int y, char category)
    {
        location = std::make_tuple(x,y);
        category = category;
    }
    std::tuple<int, int> getLoc();
    char getCategory()
    {
        return category;
    }
    void setLoc(int x, int y)
    {
        location = std::make_tuple(x, y);
    }
    void setCategory(char category)
    {
        category = category;
    }

};

#endif // SPOT_H