#include <iostream>
#include <string>
#include "player.h"
#include "warrior.h"
using namespace std;

warrior::warrior(string name, int health, int damage, string weapon){
    player(name, health, damage);
    Weapon = weapon;
};

int warrior::swingWeapon(player* opponent){
    int weaponAttack = Damage + 5;
    opponent->takeDamage(weaponAttack);
};