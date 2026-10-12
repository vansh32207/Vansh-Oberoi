/*
Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char line[1000];
    if (fgets(line, sizeof(line), stdin)) {
        char *start = strchr(line, '"');
        char s[1000] = "";
        if (start) {
            char *end = strchr(start + 1, '"');
            if (end) {
                strncpy(s, start + 1, end - start - 1);
                s[end - start - 1] = '\0';
            }
        }
        int max_len = 0, n = strlen(s);
        for (int i = 0; i < n; i++) {
            int visited[256] = {0};
            for (int j = i; j < n; j++) {
                if (visited[(unsigned char)s[j]]) break;
                visited[(unsigned char)s[j]] = 1;
                if (j - i + 1 > max_len) max_len = j - i + 1;
            }
        }
        printf("%d\n", max_len);
    }
    return 0;
}
