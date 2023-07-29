#include <iostream>

using namespace std;

// 2-3. Write a function that given an array of integers and the length of the
// array, will count the amount of times the numbers 2, 5 and 9 appear using a
// switch statement. The function must print out your results on one line in the
// following form:
//       2:<num_twos>;5:<num_fives>;9:<num_nines>;

// If the array contained three 2s, one 5 and eleven 9s, the output would be:
//       2:3;5:1;9:11;

void two_five_nine(int array[], int n) {
  int counter2 = 0;
  int counter5 = 0;
  int counter9 = 0;

  for (int i = 0; i < n; i++) {
    if (n < 1) {
      break;
    }
    switch (array[i]) {
      case 2:
        counter2++;
        break;
      case 5:
        counter5++;
        break;
      case 9:
        counter9++;
        break;
    }
  }
  cout << "2:" << counter2 << ";5:" << counter5 << ";9:" << counter9 << ";"
       << endl;
}