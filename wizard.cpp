#include <iostream>
#include <string>
#include "player.h"
#include "wizard.h"
using namespace std;

wizard::wizard(string name, int health, int damage, int mana):
    player(name, health, damage);
    Mana = mana;
{};
void wizard:: castSpell(player* opponent){
        int spellAttack = Mana * 2;
        opponent->takeDamage(spellAttack);
 };