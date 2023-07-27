#include <iostream>

// 2-5.  Write a function that given an array of integers and its length, will
// determine if the elements are in descending order or not, that is, each
// element is less than or equal to the previous element. The function must
// return true if in the size parameter is greater than 0 and the elements are
// in descending order, otherwise it must return false.

using namespace std;
bool is_descending(int array[], int n);

int main() {
  int n;
  cout << "How many elements are there? ";
  cin >> n;

  int array[n];

  for (int i = 0; i < n; i++) {
    cout << "Enter a number: ";
    cin >> array[i];
  }

cout << "The bool for whether or not this array is in descending order is: "<< is_descending(array, n) << endl;
cout << "0 indicating false, 1 indicating true" << endl;

  return 0;
}