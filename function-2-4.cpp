#include <iostream>

// 2-4.  Write a function that given an array of integers and its length, will
// determine if the elements are in ascending order or not, that is, each
// element is greater than or equal to the previous element. The function must
// return true if in the size parameter is greater than 0 and the elements are
// in ascending order, otherwise it must return false.

bool is_ascending(int array[], int n) {
  int current_element = array[0];

  if (current_element > array[0]) {
    return false;
  }

  for (int i = 1; i < n; i++) {
    if (current_element < array[i]) {
      current_element = array[i];
    } else {
      return false;
    }

    return true;
  }
  
}
