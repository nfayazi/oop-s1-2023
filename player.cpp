#include <iostream>
#include <string>
#include "player.h"
using namespace std;

player::player(string name, int health, int damage){
    Name = name;
    Health = health;
    Damage = damage;
};
void player:: takeDamage(int damage){
        Health -= damage;
 };
void player::attack(player* opponent, int damage){
        opponent->takeDamage(damage);
};
int player::getHealth(){
    return Health;
};
void player:: setHealth(int health){
    Health = health;
};
int player::getDamage(){
    return Damage;
};
void player::setDamage(int damage){
    Damage = damage;
};