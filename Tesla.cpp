#include "Tesla.h"
#include <iostream>
using namespace std;

Tesla::Tesla(){
    batteryPercentage = 100;
    emissions = 0;
}         
Tesla::Tesla(char m, int p){
    model = m;
    price = p;
    batteryPercentage = 100;
    emissions = 0;
}
void Tesla::set_model(char M){
    model = M;
}

char Tesla::get_model(){
    return model;
}
void Tesla::set_batteryPercentage(float B){
    if (B < 0){
        this->batteryPercentage = 0;
    } else if (B > 100){
        this ->batteryPercentage = 100;
    }else {
    this->batteryPercentage = B;
    }
}

float Tesla::get_batteryPercentage(){
    return this->batteryPercentage;
}
void Tesla:: chargeBattery(int mins){
    int batteryPercentageTemp = 0;
    int orig = batteryPercentage;
    for (int i = 0; i < mins; i++)
    batteryPercentage = orig;
     if(batteryPercentage < 100){
        batteryPercentageTemp = batteryPercentage + (0.5 * mins);
        }
        batteryPercentage = batteryPercentageTemp;
}
void Tesla:: drive(int kms){
    if (batteryPercentage > 0 && batteryPercentage < 100){
    batteryPercentage = batteryPercentage - (0.01 * kms/5);
    emissions = Car::emissions * 74;
    }
}