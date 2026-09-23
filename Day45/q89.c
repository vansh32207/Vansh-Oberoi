/*
Q89: Count frequency of a given character in a string.

Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/

#include <stdio.h>

int main(void) {
    char s[1000], target;
    if (scanf("%s", s) == 1 && scanf(" %c", &target) == 1) {
        int count = 0;
        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] == target) count++;
        }
        printf("%d\n", count);
    }
    return 0;
}
