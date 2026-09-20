/*
Q39: Write a program to find the product of odd digits of a number.

Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/

#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) == 1) {
        int prod = 1, hasOdd = 0;
        while (n > 0) {
            int d = n % 10;
            if (d % 2 != 0) {
                prod *= d;
                hasOdd = 1;
            }
            n /= 10;
        }
        printf("%d\n", hasOdd ? prod : 1);
    }
    return 0;
}
