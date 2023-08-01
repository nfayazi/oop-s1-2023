#include <iostream>
#include <cmath>

using namespace std;

int main(){

int digits = 4;

int binary1[4] = {1, 0, 1, 0};
int temp1[4] = {1, 0, 1, 0};
int decimal1 = 0;

int binary2[4] = {0, 1, 1, 1};
int temp2[4] = {0, 1, 1, 1};
int decimal2 = 0;

int new_binary[digits];
int new_decimal;

int i;

//cout << "Enter the first binary number: " << endl;
//cin >> binary1;

//cout << "Enter the second binary number: " << endl;
//cin >> binary2;


for (i = digits - 1; i >= 0; i--){
    if (binary1[i] == 0 && binary2[i] == 1){
        binary1[i-1] = 0;
        binary1[i] = 2;
    }
    new_binary[i] = binary1[i] - binary2[i];
}

for (i = 0; i < digits; i++){
    binary1[i] = temp1[i];
    binary2[i] = temp2[i];    

}

for (i = digits - 1; i>= 0; i--){
    if (binary1[i] == 1){
        decimal1 += pow(2,i);
    }
    if (binary2[i] == 1){
        decimal2 += pow(2, i);
    }
    if (new_binary[i] == 1){
        new_decimal += pow(2, i);
    }
}

cout << "The digits for binary1 are: ";
for (i = digits - 1; i >= 0; i--){
    cout << binary1[i];
}
cout << endl;

cout << "The digits for binary2 are: ";
for (i = digits - 1; i >= 0; i--){
    cout << binary2[i];
}
cout << endl;

cout<< "The decimal value of binary1 is " << decimal1 << " and the decimal for binary2 is " << decimal2 << endl;

cout<< "The binary of ";
for (i = digits - 1; i >= 0; i--){
    cout << binary1[i];
}
cout<< " - ";

for (i = digits - 1; i >= 0; i--){
    cout << binary2[i];
}

cout << " is ";
for (i = 3; i >= 0; i--){
    cout << new_binary[i];
}

cout << endl;
cout << "the decimal value of this new binary is " << new_decimal << endl;


    return 0;

}