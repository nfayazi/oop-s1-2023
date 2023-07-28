#include <iostream>
using namespace std;


int main(){

  int n;
  cout << "How many elements are there? ";
  cin >> n;

  int array[n];

  for (int i = 0; i < n; i++) {
    cout << "Enter a number: ";
    cin >> array[i];
  }
    int median;
    int temp_array[n];
    int current_element;

if (n % 2 == 0){
    return 0;
} else if (n < 1){
    return 0;
}

for (int i = 0; i < n; i++){
    current_element = array[i];
    if (current_element > array[i]){
        temp_array[i] = array[i];
    }
    }
    cout << temp_array << endl;
    return 0;
}
