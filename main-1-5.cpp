#include <iostream>

// 1-5. Using a for loop, count the number of even numbers between 1 and a
// number we supply (inclusive). Return 0 if the parameter is less than 1.
using namespace std;

extern int count_evens(int number);

int main() {
  int number;
  cout << "Enter the desired number: ";
  cin >> number;

  cout << "There are " << count_evens(number) << " even numbers between 1 and "
       << number << ".";
  cout << endl;

  return 0;
}