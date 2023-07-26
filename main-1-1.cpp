#include <iostream>

using namespace std;
extern int array_sum(int array[], int n);

int main(){
int n;

cout << "How big is the array?: " << endl;
cin >> n;

int array[n];

for (int i = 0; i < n; i++){
    cout << "What number is in the array?: " << endl;
    cin >> array[i];
}
array_sum(int array[n], int n);

    return 0;
}