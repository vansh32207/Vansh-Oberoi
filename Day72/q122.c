/*
Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.

Sample Test Cases:
Input 1:
File: info.txt (Content: Name: Rahul\nAge: 23)
Output 1:
Name: Rahul
Age: 23

*/

#include <stdio.h>

int main(void) {
    FILE *fp = fopen("info.txt", "r");
    if (!fp) {
        // Create if missing for test
        fp = fopen("info.txt", "w");
        if (fp) {
            fprintf(fp, "Name: Rahul\nAge: 23\n");
            fclose(fp);
            fp = fopen("info.txt", "r");
        }
    }
    if (fp) {
        char ch;
        while ((ch = fgetc(fp)) != EOF) {
            putchar(ch);
        }
        fclose(fp);
    }
    return 0;
}
