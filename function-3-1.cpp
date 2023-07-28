#include <iostream>

using namespace std;

// 3-1.  Write a function that given an array of integers, and its length,
// determine if the array is a 'fan' array, i.e. the entire array is a
// palindrome with the numbers in ascending order from the start to the middle
// element. e.g. {1,2,3,2,1} and {2,4,4,2} are both fan arrays but, {1,2,1,2,1}
// and {1,3,5,4,2} are not. The function must return false if the size
// parameter, n, is less than 1.

bool is_fanarray(int array[], int n) {
    int current_element = array [0];

if (n < 1){
    return false;
}

for (int i = 1; i < (n/2); i++){
    if (current_element > array[i]){
        return false;
    } else {
        current_element = array[i];
    }
}

for (int i = n; i > (n/2); i--){
    if (current_element > array[i]){
        return false;
    } else {
        current_element = array[i];
    }
}

return true;

}