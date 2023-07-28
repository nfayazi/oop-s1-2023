#include <iostream>

// 1-4. Write a function that returns the sum of two arrays as an integer (of
// equal size). The function should take as parameters an array, another array
// and their size. Hence the result is sum of array 1 + sum of array 2. The
// function should return 0 if the size parameter, n, is less than 1. Try to do
// this in one for loop.

using namespace std;
extern int sum_two_arrays(int array[], int secondarray[], int n);

int main() {
  int n;
  cout << "How many elements are in the array?" << endl;
  cin >> n;

  int array[n];

  for (int i = 0; i < n; i++) {
    cout << "Enter a number for array 1: " << endl;
    cin >> array[i];
  }

  int secondarray[n];

  for (int i = 0; i < n; i++) {
    cout << "Enter a number for array 2: " << endl;
    cin >> secondarray[i];
  }

  cout << "The sum of array 1 and array 2 is: "
       << sum_two_arrays(array, secondarray, n) << endl;
  cout << endl;

  return 0;
}