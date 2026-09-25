/*
Q94: Find the longest word in a sentence.

Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1000];
    if (fgets(s, sizeof(s), stdin)) {
        char best[1000] = "", cur[1000] = "";
        int best_len = 0, cur_len = 0;
        for (int i = 0; ; i++) {
            if (s[i] != ' ' && s[i] != '\n' && s[i] != '\r' && s[i] != '\0') {
                cur[cur_len++] = s[i];
            } else {
                cur[cur_len] = '\0';
                if (cur_len > best_len) {
                    best_len = cur_len;
                    strcpy(best, cur);
                }
                cur_len = 0;
                if (s[i] == '\0') break;
            }
        }
        printf("%s\n", best);
    }
    return 0;
}
