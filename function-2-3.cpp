
/*

2-3. Given an array of integers, write a function to calculate the sum of the
elements if it is a palindrome array. If it is not a palindrome array, your
function must return -2. Your function must call separate functions to check
whether or not the array is a palindrome and to calculate the sum of its
elements. If the length is O or negative each function must return -1 or false
as its result.

*/

bool is_palindrome(int integers[], int length){
  int current_element = integers[0];

  if (length < 1) {
    return false;
  }

  for (int i = 1; i <= (length / 2); i++) {
    if (current_element > integers[i]) {
      return false;
    } else if (current_element <= integers[i]) {
      current_element = integers[i];
    }
  }

  for (int i = length / 2; i < length; i++) {
    if (current_element < integers[i]) {
      return false;
    } else if (current_element >= integers[i]) {
      current_element = integers[i];
    }
  }

  return true;
}

int sum_array_elements(int integers[], int length){
int sum = 0;

if (is_palindrome(integers, length) == false){
    return -2;
}
for (int i = 0; i < length; i++){
    sum += integers[i];
}
return sum;


    
}

int sum_if_palindrome(int integers[], int length) {
int sum_if_palindrome = 0;

if (is_palindrome(integers, length) == true){
    sum_if_palindrome = sum_array_elements(integers, length);
} else {
    return -2;
}

return sum_if_palindrome;

}