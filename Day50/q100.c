/*
Q100: Print all sub-strings of a string.

Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1000];
    if (scanf("%s", s) == 1) {
        int n = strlen(s);
        int first = 1;
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (!first) printf(",");
                for (int k = i; k <= j; k++) putchar(s[k]);
                first = 0;
            }
        }
        printf("\n");
    }
    return 0;
}
