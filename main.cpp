#include <iostream>
#include "workshop.h"
using namespace std;

int main() {
  double value = 2;
  double* val = &value;
  cout << "Part 2:" << endl;
  cout << "The value is now: ";
  changeValue(val);
  cout << endl;

  cout << "Part 3:" << endl;
  double a[3] = {1, 2, 3};
  int size = 3;
  cout << "The array is: ";
  printArray(a, size);
  cout << endl;

  cout << "Part 4:" << endl;
  cout << "The largest element in a is: " << arrayMax(a, size) << endl;

  cout << "Part 6: " << endl;
  int N = 3;
  double M = 12;
  double* array = dynamicArray(N, M);
  cout << "The max of this array is: " << arrayMax(a, N) << endl;
  delete[] array;

  cout << "Part 7: " << endl;
  double* seven = dynamicArray(N, M);

  cout << "The elements of the array are: " << endl;
  for (int i = 0; i < N; i++) {
    cout << seven[i] << endl;
  }
  delete[] seven;

  return 0;
}
