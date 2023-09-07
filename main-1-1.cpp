#include "Car.h"
#include <iostream>
using namespace std;

int main(){
    Car car1 = Car(20);
    car1.drive(10);
    cout << "Car 1: " << endl;
    cout << "Price: " << car1.get_price() << " | ";
    cout << "Emissions: " << car1.get_emissions() << endl;


    return 0;
}