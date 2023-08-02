#include <iostream>

using namespace std;

// 1-1. Given a matrix of integers, return the sum of the elements along the
// main diagonal (top left bottom right)

extern int sum_diagonal(int array[4][4]);

int main() {
  int array[4][4];
  const int size = 4;
  cout << "Enter the elements for the array: " << endl;

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      cin >> array[i][j];
    }
  }

cout << "the diagonal sum of this matrix is: " << sum_diagonal(array) << endl;

  return 0;
}