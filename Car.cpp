#include "Car.h"
#include <iostream>
using namespace std;

Car::Car(){}
Car::Car(int Price){
    emissions = 0;
    price = Price;
}
void Car:: set_price(int Price){
    price = Price;
}
int Car:: get_price(){
    return price;
}
int Car:: get_emissions(){
    return emissions;
}
void Car:: drive(int kms){
    emissions = 20 * kms;
}