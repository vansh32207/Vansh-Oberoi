/*
Q98: Print initials of a name with the surname displayed in full.

Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1000];
    if (fgets(s, sizeof(s), stdin)) {
        char words[20][50];
        int count = 0, idx = 0;
        for (int i = 0; s[i] != '\0' && s[i] != '\n' && s[i] != '\r'; i++) {
            if (s[i] != ' ') {
                words[count][idx++] = s[i];
            } else if (idx > 0) {
                words[count][idx] = '\0';
                count++;
                idx = 0;
            }
        }
        if (idx > 0) {
            words[count][idx] = '\0';
            count++;
        }
        for (int i = 0; i < count - 1; i++) {
            printf("%c.", words[i][0]);
        }
        if (count > 0) {
            printf(" %s\n", words[count - 1]);
        }
    }
    return 0;
}
