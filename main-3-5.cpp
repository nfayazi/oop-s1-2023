#include <iostream>

using namespace std;
// 3-5. Write a function that returns the sum of the elements in the even
// positions in an array. The function must return 0 if the size parameter, n,
// is less than 1. Note, 0 is considered an even position.

extern double sum_even(double array[], int n);

int main() {
  int n;
  cout << "How many elements are there? ";
  cin >> n;

  double array[n];

  for (int i = 0; i < n; i++) {
    cout << "Enter a number: ";
    cin >> array[i];
  }

  cout << "The sum of the array's even positions is " << sum_even(array, n)
       << endl;

  return 0;
}