#include <iostream>
#include <cmath>

/*
2-2. Given a binary number represented as an array, write a function that takes
the array and its size as a parameter, and returns the integer value. You may
assume that there are at least 1 and no more than 30 numbers in the array and
that all the values are either O or 1. The array is ordered with most
significant binary digit at the start (index O) and the least significant digit
at the end.

*/

int binary_to_int (int binary_digits[], int number_of_digits){
int integer = 0;
int reverse_digits[number_of_digits];

for (int i = 0; i < number_of_digits; i++){
    reverse_digits[i] = binary_digits[number_of_digits - 1 - i];
}


for (int i = 0; i < number_of_digits; i++){
    if (reverse_digits[i] == 1){
        integer += pow(2, i);
    }
}

return integer;

}