#ifndef GAMEENTITY_H
#define GAMEENTITY_H
#include <iostream>
#include <tuple>

class GameEntity {
protected:
std::tuple<int, int> position;
char type;


public:
GameEntity(int x, int y, char type)
{

}

char getType()
{

}

virtual void apply(GameEntity& entity)
{
    
}

};

#endif // GAMEENTITY_H
