#include <iostream>
using namespace std;

// 1-3 Given a matrix of integers, count the number of times each number 0-9
// appears. Print out your results on one line in the following form:


void count_digits(int array[4][4]){
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
    int count5 = 0;
    int count6 = 0;
    int count7 = 0;
    int count8 = 0;
    int count9 = 0;
    int rows = 4;
    int cols = 4;

    for (int r = 0; r < rows; r++){
        for (int c = 0; c < cols; c++){
            switch (array[r][c]) {
            case 0:
            count0++;
            break;
            case 1:
            count1++;
            break;
            case 2:
            count2++;
            break;
            case 3:
            count3++;
            break;
            case 4:
            count4++;
            break;
            case 5:
            count5++;
            break;
            case 6:
            count6++;
            break;
            case 7:
            count7++;
            break;
            case 8:
            count8++;
            break;
            case 9:
            count9++;
            break;
            }
        }
    }
    
    cout << "0:" << count0 << ";1:" << count1;
    cout << ";2:" << count2 << ";3:" << count3;
    cout << ";4:" << count4 << ";5:" << count5;
    cout << ";6:" << count6 << ";7:" << count7;
    cout << ";8:" << count8 << ";9:" << count9 << ";";

//0:12;1:4;2:0;3:0;4:0;5:0;6:0;7:0;8:0;9:0;


}