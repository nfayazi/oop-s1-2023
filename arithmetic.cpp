#include <iostream>
#include <cmath>

using namespace std;

int main(){

int digits = 4;

int binary1[4] = {1, 0, 1, 0};
int reverse_binary1[4];
int decimal1 = 0;

int binary2[4] = {0, 1, 1, 1};
int reverse_binary2[4];
int decimal2 = 0;

int new_binary[digits];
int reverse_new[4];
int new_decimal = 0;

int i;

// initialise the reverse of each binary array
    for (int i = 0; i < digits; i++) {
        reverse_binary1[i] = binary1[digits - 1 - i];
    }

    for (int i = 0; i < digits; i++) {
        reverse_binary2[i] = binary2[digits - 1 - i];
    }

for (i = digits - 1; i >= 0; i--){
    if (binary1[i] == 0 && binary2[i] == 1){
        new_binary[i] = 1;
        binary1[i - 1] = 0;
    } else if (binary1[i] == 1 && binary2[i]){
        new_binary[i] = 1;
    }
}

    for (int i = 0; i < digits; i++) {
        reverse_new[i] = new_binary[digits - 1 - i];
    }


//perform subtraction on original binary
for (i = 0; i < digits; i++){
    if (reverse_binary1[i] == 1){
        decimal1 += pow(2,i);
    }
    if (reverse_binary2[i] == 1){
        decimal2 += pow(2, i);
    }
    if (new_binary[i] == 1){
        new_decimal += pow(2, i);
    }
}

//print digits of binary1
cout << "The digits for binary1 are: ";
for (i = 0; i < digits; i++){
    cout << binary1[i];
}
cout << endl;


//print digits for binary2
cout << "The digits for binary2 are: ";
for (i = 0; i < digits; i++){
    cout << binary2[i];
}
cout << endl;

cout<< "The decimal value of binary1 is " << decimal1 << " and the decimal for binary2 is " << decimal2 << endl;

cout<< "The binary of ";
for (i = digits - 1; i >= 0; i--){
    cout << reverse_binary1[i];
}
cout<< " - ";

for (i = digits - 1; i >= 0; i--){
    cout << reverse_binary2[i];
}

cout << " is ";
for (i = digits; i >= 0; i--){
    cout << reverse_new[i];
}

cout << endl;
cout << "the decimal value of this new binary is " << new_decimal << endl;


    return 0;

}