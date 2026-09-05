/*
Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *


Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 4; i++) {
        for (int s = 0; s < 4 - i; s++) printf(" ");
        for (int j = 0; j < 2 * i - 1; j++) printf("*");
        printf("\n");
    }
    return 0;
}
