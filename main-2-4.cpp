#include <iostream>

// 2-4.  Write a function that given an array of integers and its length, will
// determine if the elements are in ascending order or not, that is, each
// element is greater than or equal to the previous element. The function must
// return true if in the size parameter is greater than 0 and the elements are
// in ascending order, otherwise it must return false.

using namespace std;
extern bool is_ascending(int array[], int n);

int main() {
  int n;
  cout << "How many elements are there? ";
  cin >> n;

  int array[n];

  for (int i = 0; i < n; i++) {
    cout << "Enter a number: ";
    cin >> array[i];
  }

is_ascending(array, n);

  return 0;
}