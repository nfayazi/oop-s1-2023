#include <iostream>

using namespace std;

// 2-3. Write a function that given an array of integers and the length of the
// array, will count the amount of times the numbers 2, 5 and 9 appear using a
// switch statement. The function must print out your results on one line in the
// following form:
//       2:<num_twos>;5:<num_fives>;9:<num_nines>;

// If the array contained three 2s, one 5 and eleven 9s, the output would be:
//       2:3;5:1;9:11;

using namespace std;
extern void two_five_nine(int array[], int n);

int main(){
    int n;
    cout << "How many elements are there? ";
    cin >> n;

int array[n];

for (int i = 0; i < n; i++){
    cout << "Enter a number: ";
    cin >> array[i];
}


two_five_nine(array, n);

    return 0;
}