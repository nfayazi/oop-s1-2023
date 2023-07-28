#include <iostream>

using namespace std;

// 3-1.  Write a function that given an array of integers, and its length,
// determine if the array is a 'fan' array, i.e. the entire array is a
// palindrome with the numbers in ascending order from the start to the middle
// element. e.g. {1,2,3,2,1} and {2,4,4,2} are both fan arrays but, {1,2,1,2,1}
// and {1,3,5,4,2} are not. The function must return false if the size
// parameter, n, is less than 1.

bool is_fanarray(int array[], int n);

int main() {
  int n;
  cout << "How many elements are there? ";
  cin >> n;

  int array[n];

  for (int i = 0; i < n; i++) {
    cout << "Enter a number: ";
    cin >> array[i];
  }

cout << "The bool for whether or not this is a fan array is: "<< is_fanarray(array, n) << endl;
cout << "0 indicating false, 1 indicating true" << endl;

  return 0;
}