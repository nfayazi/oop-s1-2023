#include <iostream>
// 1-3. Write a function that returns the number of elements in an array that
// are equal to a given parameter. The function should take as parameters the
// array, its size, and the desired number. The function should return 0 if the
// size parameter, n, is less than 1.

using namespace std;
extern int num_count(int array[], int n, int number);

int main() {
  int number;
  cout << "Enter the desired number: " << endl;
  cin >> number;

  int n;
  cout << "How many elements are in the array?" << endl;
  cin >> n;

  int elements[n];

  for (int i = 0; i < n; i++) {
    cout << "Enter a number: " << endl;
    cin >> elements[i];
  }

  cout << "The desired number " << number << " appears in the array " << num_count(elements, n, number) << " times." << endl;
  cout << endl;

  return 0;
}