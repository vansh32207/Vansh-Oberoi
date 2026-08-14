/*
Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/

#include <stdio.h>

int main(void) {
    int sec;
    if (scanf("%d", &sec) == 1) {
        int h = sec / 3600;
        int m = (sec % 3600) / 60;
        int s = sec % 60;
        printf("%d:%d:%d\n", h, m, s);
    }
    return 0;
}
