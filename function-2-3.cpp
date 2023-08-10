#include <iostream>
using namespace std;

/*

2-3: Palindrome Array [5 marks]
Definition: A palindrome is a sequence that reads the same backwards as it does
forwards. Hence, 101, 120021, and 1 are all numerical palindromes. The number
1234 is NOT a palindrome. A palindrome array would be of the form [-1,2,2,-1]
for example.

Given an array of integers, write a function to calculate the sum of the
elements if it is a palindrome array. If it is not a palindrome array, your
function must return -2. Your function must call separate functions to check
whether or not the array is a palindrome and to calculate the sum of its
elements.  If the length is 0 or negative each function must return -1 or false
as its result. The function must be placed in a file named function-2-3.cpp. You
must also write a main function and place it in a file named main-2-3.cpp.

*/


int palindrome_sum(int integers[], int length){
int sum = 0;

if (length < 1){
    return -1;
}

for (int i = 0; i < length; i++){
    sum += integers[i];
}

return sum;
}


bool is_array_palindrome(int integers[], int length){

if (length < 1){
    return false;
}


for (int i = 0; i < (length/2); i++){
    if (integers[i] != integers[length - 1 - i]){
        return false;
    }
}

return true;

}



int sum_integers(int integers[], int length){
    int sum = 0;

    if (length < 1){
    return -1;
    }

    if (is_array_palindrome(integers, length) == true){
        sum = palindrome_sum(integers, length);
    } else if (is_array_palindrome(integers, length) == false){
        return -2;
    }

return sum;

}
