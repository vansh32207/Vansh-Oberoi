/*
Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char line[1000];
    if (fgets(line, sizeof(line), stdin)) {
        char *s_start = strstr(line, "s = \"");
        char *t_start = strstr(line, "t = \"");
        char s[500] = "", t[500] = "";
        if (s_start && t_start) {
            sscanf(s_start + 5, "%[^\"]", s);
            sscanf(t_start + 5, "%[^\"]", t);
        }
        int c[256] = {0};
        for (int i = 0; s[i] != '\0'; i++) c[(unsigned char)s[i]]++;
        for (int i = 0; t[i] != '\0'; i++) c[(unsigned char)t[i]]--;
        int anagram = 1;
        for (int i = 0; i < 256; i++) {
            if (c[i] != 0) { anagram = 0; break; }
        }
        if (anagram) printf("Anagram\n");
        else printf("Not Anagram\n");
    }
    return 0;
}
