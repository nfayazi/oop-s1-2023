#ifndef player_h
#define player_h

#include <iostream>
#include <string>
using namespace std;

class player {
    private:
    string Name;
    int Health;
    int Damage;

    public:
    player(string name, int health, int damage);
    void attack(player* opponent, int damage);
    void takeDamage(int damage);
    int getHealth();
    void setHealth(int health);
    int getDamage();
    void setDamage(int damage);
};

#endif