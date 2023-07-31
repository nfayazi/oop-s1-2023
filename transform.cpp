#include <iostream>
using namespace std;

int main(){

int number = 12;
int base = 2;
int og_num = number;
int digit_counter = 0;

    while (number / base != 0){
    if (number / base >= 0){
        digit_counter++;
        number = number / base;
    }
    }


number = og_num;
int digit[digit_counter];

    for (int i = 0; i < digit_counter; i++){
    if (number % base >= 0){
        digit[i] = number % base;
        number = number/base;
    }
}

cout << digit_counter;

    cout << "The number " << og_num << " has a binary digit of ";

for (int i = 0; i <= digit_counter; i++){
    cout << digit[i];
}

cout << endl;

    return 0;
}