#include <iostream>

using namespace std;

// 3-2. Given an array of integers and its length, return the median of the
// array. The median of a list is the middle number of the sorted list. E.g. the
// array {3,5,2,1,4} after sorting becomes {1,2,3,4,5} which has a median of 3.
// The function must return 0 if the size parameter, n, is even or if it is less
// than 1.

extern int median_array(int array[], int n);

int main() {
  int n;
  cout << "How many elements are there? ";
  cin >> n;

  int array[n];

  for (int i = 0; i < n; i++) {
    cout << "Enter a number: ";
    cin >> array[i];
  }

cout << median_array(array, n);

  return 0;
}