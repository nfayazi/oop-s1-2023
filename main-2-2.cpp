#include <iostream>

using namespace std;

// Write a function that given an array of integers and its length, will find
// the minimum (smallest) number and return it. The function should return 0 if
// the size parameter, n, is less than 1.

extern int max_element(int array[], int n);

int main() {
  int n;
  cout << "How many elements, n, are in the array? ";
  cin >> n;

  int array[n];

  for (int i = 0; i < n; i++) {
    cout << "Enter a number: ";
    cin >> array[i];
  }

  cout << endl
       << "The largest number within the array is: " << max_element(array, n)
       << endl;

  return 0;
}