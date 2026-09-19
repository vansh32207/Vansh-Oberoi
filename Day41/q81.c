/*
Q81: Count characters in a string without using built-in length functions.

Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/

#include <stdio.h>

int main(void) {
    char s[1000];
    if (fgets(s, sizeof(s), stdin)) {
        int len = 0;
        while (s[len] != '\0' && s[len] != '\n' && s[len] != '\r') len++;
        printf("%d\n", len);
    }
    return 0;
}
