/*
Q97: Print the initials of a name.

Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1000];
    if (fgets(s, sizeof(s), stdin)) {
        for (int i = 0; s[i] != '\0'; i++) {
            if (i == 0 && s[i] != ' ') {
                printf("%c.", s[i]);
            } else if (s[i - 1] == ' ' && s[i] != ' ' && s[i] != '\n' && s[i] != '\r') {
                printf("%c.", s[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
