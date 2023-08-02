#include <iostream>

using namespace std;

// 1-1. Given a matrix of integers, return the sum of the elements along the
// main diagonal (top left bottom right)

int sum_diagonal(int array[4][4]);

int main() {
  int array[4][4];
  cout << "Enter the elements for the array: " << endl;

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      cin >> array[i][j];
    }
  }

  cout << "This matrix is: " << endl;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      cin >> array[i][j];
    }
  }

  return 0;
}