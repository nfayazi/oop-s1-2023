#include <cmath>
#include <iostream>
using namespace std;

/*
2-2. Given a binary number represented as an array, write a function that takes
the array and its size as a parameter, and returns the integer value. You may
assume that there are at least 1 and no more than 30 numbers in the array and
that all the values are either O or 1. The array is ordered with most
significant binary digit at the start (index O) and the least significant digit
at the end.

*/

int binary_to_int(int binary_digits[], int number_of_digits);

int main() {
  int number_of_digits = 4;
  int binary_digits[] = {0, 0, 1, 1};

  cout << "The integer of ";
  for (int i = 0; i < number_of_digits; i++) {
    cout << binary_digits[i];
  }
 cout << " is " << binary_to_int(binary_digits, number_of_digits) << endl;

 return 0;

}