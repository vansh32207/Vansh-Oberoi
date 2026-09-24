/*
Q92: Find the first repeating lowercase alphabet in a string.

Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

#include <stdio.h>

int main(void) {
    char s[1000];
    if (scanf("%s", s) == 1) {
        int count[26] = {0};
        char rep = '\0';
        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                count[s[i] - 'a']++;
                if (count[s[i] - 'a'] == 2) {
                    rep = s[i];
                    break;
                }
            }
        }
        if (rep) printf("%c\n", rep);
        else printf("None\n");
    }
    return 0;
}
