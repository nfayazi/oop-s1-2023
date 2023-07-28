#include <iostream>

using namespace std;

extern double array_mean(int array[], int n);

int main() {
  int n;
  cout << "How many elements are in the array?" << endl;
  cin >> n;
  int elements[n];

  for (int i = 0; i < n; i++) {
    cout << "Enter a number: " << endl;
    cin >> elements[i];
  }

  cout << "The average of this array is " << array_mean(elements, n) << endl;
  cout << endl;

  return 0;
}