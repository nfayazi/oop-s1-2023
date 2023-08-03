#include <iostream>

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
    int size = 4;

    for (int r = 0; r < size; r++){
        for (int c = 0; c < size; c++){
            switch (array[r][c])
            case 0:
            count0++;
            case 1:
            count1++;
            case 2:
            count2++;
            case 3:
            count3++;
            case 4:
            count4++
            case 5:
            count5++;
            case 6:
            count6++;
            case 7:
            count7++;
            case 8:
            count8++;
            case 9:
            count9++;
        }
    }


}