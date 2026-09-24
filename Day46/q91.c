/*
Q91: Remove all vowels from a string.

Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/

#include <stdio.h>
#include <ctype.h>

int main(void) {
    char s[1000];
    if (scanf("%s", s) == 1) {
        for (int i = 0; s[i] != '\0'; i++) {
            char lower = tolower((unsigned char)s[i]);
            if (lower != 'a' && lower != 'e' && lower != 'i' && lower != 'o' && lower != 'u') {
                putchar(s[i]);
            }
        }
        putchar('\n');
    }
    return 0;
}
