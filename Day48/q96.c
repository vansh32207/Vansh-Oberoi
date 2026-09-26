/*
Q96: Reverse each word in a sentence without changing the word order.

Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include <stdio.h>
#include <string.h>

void rev(char *w, int len) {
    for (int i = 0; i < len / 2; i++) {
        char t = w[i];
        w[i] = w[len - 1 - i];
        w[len - 1 - i] = t;
    }
}

int main(void) {
    char s[1000];
    if (fgets(s, sizeof(s), stdin)) {
        int len = strlen(s);
        if (len > 0 && s[len - 1] == '\n') s[--len] = '\0';
        int start = 0;
        for (int i = 0; i <= len; i++) {
            if (s[i] == ' ' || s[i] == '\0') {
                rev(&s[start], i - start);
                start = i + 1;
            }
        }
        printf("%s\n", s);
    }
    return 0;
}
