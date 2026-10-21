/*
Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/

#include <stdio.h>
#include <ctype.h>

int main(void) {
    FILE *fp = fopen("sample.txt", "r");
    if (!fp) {
        fp = fopen("sample.txt", "w");
        if (fp) {
            fprintf(fp, "Hello world\nThis is C programming\n");
            fclose(fp);
            fp = fopen("sample.txt", "r");
        }
    }
    if (fp) {
        int chars = 0, words = 0, lines = 0;
        int in_word = 0;
        char ch;
        while ((ch = fgetc(fp)) != EOF) {
            chars++;
            if (ch == '\n') lines++;
            if (isspace((unsigned char)ch)) {
                in_word = 0;
            } else if (!in_word) {
                in_word = 1;
                words++;
            }
        }
        fclose(fp);
        printf("Characters: %d\nWords: %d\nLines: %d\n", chars, words, lines);
    }
    return 0;
}
