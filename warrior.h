#include <iostream>
#include <string>
#include "player.h"
using namespace std;

class warrior : public player {
    private:
    string Weapon;

    public:
    warrior(string name, int health, int damage, string weapon);
    int swingWeapon(player* opponent);
};