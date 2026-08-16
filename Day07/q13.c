/*
Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year

Input 3:
2000
Output 3:
Leap year

*/

#include <stdio.h>

int main(void) {
    int y;
    if (scanf("%d", &y) == 1) {
        if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0)) {
            printf("Leap year\n");
        } else {
            printf("Not a leap year\n");
        }
    }
    return 0;
}
