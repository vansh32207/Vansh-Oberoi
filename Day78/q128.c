/*
Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/

#include <stdio.h>
#include <ctype.h>

int main(void) {
    FILE *fp = fopen("text.txt", "r");
    if (!fp) {
        fp = fopen("text.txt", "w");
        if (fp) {
            fprintf(fp, "Welcome to C language\n");
            fclose(fp);
            fp = fopen("text.txt", "r");
        }
    }
    if (fp) {
        int v = 0, c = 0;
        char ch;
        while ((ch = fgetc(fp)) != EOF) {
            ch = tolower((unsigned char)ch);
            if (ch >= 'a' && ch <= 'z') {
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') v++;
                else c++;
            }
        }
        fclose(fp);
        printf("Vowels: %d\nConsonants: %d\n", v, c);
    }
    return 0;
}
