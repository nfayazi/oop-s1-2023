#include "Ford.h"
#include <iostream>

using namespace std;

int main(){
    Ford f1 = Ford(1, 2);
    cout << f1.get_badgeNumber() << " | price: " << f1.get_price();
    cout << "fuel: " << f1.get_fuel() << " | emissions: " << f1.get_emissions() << endl;

    f1.drive(5);
    cout << "emissions: " << f1.get_emissions() << " | fuel: " << f1.get_fuel() << endl;
}