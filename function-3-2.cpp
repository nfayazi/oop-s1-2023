#include <iostream>

using namespace std;

// 3-2. Given an array of integers and its length, return the median of the
// array. The median of a list is the middle number of the sorted list. E.g. the
// array {3,5,2,1,4} after sorting becomes {1,2,3,4,5} which has a median of 3.
// The function must return 0 if the size parameter, n, is even or if it is less
// than 1.

int median_array(int array[], int n) {
  int median;
  int temp_array[n];
  int current_element;

  if (n % 2 == 0) {
    return 0;
  } else if (n < 1) {
    return 0;
  }

  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - 1; j++) {
      if (array[j] > array[j + 1]) {
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }

    median = array[n / 2];
  }
  return median;
}
