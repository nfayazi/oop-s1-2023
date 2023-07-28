#include <iostream>
using namespace std;


int main(){

  int n = 5;
  int array[5] = {3, 5, 1, 2, 4};
  int temp_array[5];

for (int i = 0; i < n; i++){
    temp_array[i] = array[i];
}

if (n % 2 == 0){
    return 0;
} else if (n < 1){
    return 0;
}

    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - 1; j++){

        if (array[j] > array[j+1]){
        int temp = array[j];
        array[j] = array[j+1];
        array[j+1] = temp;
        }
        }

    }

    for (int i = 0; i < n; i++){
        cout << array[i] << endl;
    }
    return 0;
}
