/*
Q4: Write a program to calculate the area and circumference of a circle given its radius.

Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/

#include <stdio.h>

int main(void) {
    double r;
    if (scanf("%lf", &r) == 1) {
        double pi = 3.14159265358979323846;
        double area = pi * r * r;
        double circ = 2.0 * pi * r;
        printf("Area=%.2f, Circumference=%.2f\n", area, circ);
    }
    return 0;
}
