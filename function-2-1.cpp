#include <iostream>
#include <string>
#include <cmath>

using namespace std;
/*
2-1. Given a positive integer decimal number (i. base-10), write a function that
transforms it into binary (base-2), and prints out the result. You may assume
that the string contains at least 1 and no more than 9 digits. Each digit in the
string is O-9. Examples of input strings: "O", "789" or "123456789". The output
should only include the binary digits (i.e 0-1) followed by a new line. Example
outputs: "1101", "101", "1110111" Hint: You might need to convert a string to
integer. Have a look at the stoi(string) in the C++11 string library. If you
need to compile with C++11, include the compilation flag -std=c++11 in your
compile command.
*/

void print_binary_str(string decimal_number){
int digits = 0;
int root_decimal = 0;
int decimal = stoi(decimal_number);


while (root_decimal <= decimal){
    root_decimal = sqrt(decimal);
    digits++;
}

int array_decimal[digits];


cout << "The binary digits of " << decimal << "is: ";
for (int i = 0; i < digits; i++){
    array_decimal[i] = decimal % 2;
    decimal /= 2;
    cout << array_decimal[i];
}


}


