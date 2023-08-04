#include <iostream>

// 2-2: Write a function that returns the maximum element in an integer array.
// The function should return 0 if the size parameter, n, is less than 1.

// function for min number
int array_min(int integers[], int length){
  int array_min = integers[0];

  if (length < 1) {
    return -1;
  }

  for (int i = 0; i < length; i++) {
    if (integers[i] < array_min) {
      array_min = integers[i];
    }
  }

  return array_min;
}


// function for max number
int array_max(int integers[], int length){

  int array_max = integers[0];

  if (length < 1) {
    return -1;
  }

  for (int i = 0; i < length; i++) {
    if (array_max < integers[i]) {
      array_max = integers[i];
    }
  }

  return array_max;
}


// function for sum
int sum_min_max(int integers[], int length) {
  if (length < 1) {
    return -1;
  }

  int max = array_max(integers, length);
  int min = array_min(integers, length);

  int sum_min_max = max + min;

  return sum_min_max;
}