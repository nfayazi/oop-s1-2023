#include "Tesla.h"
#include <iostream>
using namespace std;

int main(){

    Tesla t1 = Tesla('AC',2);
    cout << t1.get_model() << " | price: " << t1.get_price() << endl;
    t1.set_batteryPercentage(3);
    cout << "Battery at: " << t1.get_batteryPercentage() << endl;
    cout << "Recharing..";
    t1.chargeBattery(10);
    cout << t1.get_batteryPercentage() << "%" << endl;

    t1.drive(10);
    cout << "After driving, battery percentage at: " << t1.get_batteryPercentage() << endl;

    return 0;
}