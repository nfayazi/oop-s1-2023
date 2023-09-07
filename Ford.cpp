#include "Ford.h"
#include <iostream>

Ford::Ford()  {
    litresOfFuel = 60;
    emissions = 0;
}         
Ford::Ford(int BadgeNumber, int Price){
    badgeNumber = BadgeNumber;
    price = Price;
    litresOfFuel = 60;
    emissions = 0;
}
void Ford:: set_fuel(float f){
    litresOfFuel = f;

}
float Ford::get_fuel(){
    return litresOfFuel;
}
void Ford::set_badgeNumber(int n){
    badgeNumber = n;
}
int Ford::get_badgeNumber(){
    return badgeNumber;
}
void Ford::refuel(int litres){
    for (int i = 0; i < litres; i++){
    while (litresOfFuel <= 60){
        litresOfFuel++;
    }
    }
}
void Ford::drive(int kms){
    int kms_temp = kms /5;
    for (int i = 0; i < kms_temp; i++){
        litresOfFuel--;
    }
    if (litresOfFuel > 0){
        emissions = emissions + (234*kms_temp);
    } else {
        emissions = emissions;
    }
};