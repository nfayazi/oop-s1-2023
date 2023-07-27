#include <iostream>

using namespace std;

// 2-2: Write a function that returns the maximum element in an integer array.
// The function should return 0 if the size parameter, n, is less than 1.

int max_element(int array[], int n) { 
      int max_number = array[0];

  if (n < 1) {
    cout << endl << "There are no valid elements to check for in this array." << endl;
    return 0;
  }

  for (int i = 0; i < n; i++) {
    if (max_number < array[i]) {
      max_number = array[i];
    }
  }

    return max_number;
}