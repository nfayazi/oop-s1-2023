#include <iostream>
#include <string>
#include "player.h"
using namespace std;

class wizard  : public player {
    private:
    int Mana;

    public:
    wizard(string name, int health, int damage, int mana);
    void castSpell(player* opponent);

};