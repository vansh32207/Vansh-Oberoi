/*
Q37: Write a program to find the LCM of two numbers.

Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/

#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main(void) {
    int a, b;
    if (scanf("%d %d", &a, &b) == 2) {
        printf("%d\n", (a * b) / gcd(a, b));
    }
    return 0;
}
