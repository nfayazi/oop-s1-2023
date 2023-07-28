#include <iostream>

using namespace std;

// 3-3.  Write a function that given an array and its length, returns the
// weighted average of the array, defined as Σ xi * wi / n, where xi represents
// all the distinct elements in the array, wi represents how many times the
// value of element xi appears in the array, and n is the size of the array. eg.
// if  the array is {1,2,1,4,1,3} the weighted average is (1 * 3 / 6) + (2 * 1 /
// 6) + (1 * 3 / 6)  + (4 * 1 / 6) + (1 * 3 / 6) + (3 * 1 / 6) = 3.0. The
// function must return 0 if the size parameter, n, is less than 1.

double weighted_average(int array[], int n) {
    double weighted_average = 0;
    double average = 0;
    double sum = 0;

    if (n < 1){
        return 0;
    }

for (int i = 0; i < n; i++){
        int count = 0;
    for (int j = 0; j < n; j++){
        if (array[i] == array[j]){
        count++;
        }
    }
    sum = array[i] * count;
    weighted_average += sum;
}

weighted_average /= n;

return weighted_average;


}