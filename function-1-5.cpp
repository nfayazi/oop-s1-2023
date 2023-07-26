#include <iostream>

// 1-5. Using a for loop, count the number of even numbers between 1 and a
// number we supply (inclusive). Return 0 if the parameter is less than 1.

int count_evens(int number) {
  int even_count = 0;

  for (int i = 1; i < number; i++) {
    if (i % 2 == 0) {
      even_count++;
    }
  }

  return even_count;
}