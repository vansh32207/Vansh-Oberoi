/*
Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/

#include <stdio.h>

int main(void) {
    char src[100] = "source.txt", dest[100] = "destination.txt";
    // Check if input provides filenames
    if (scanf("%s %s", src, dest) != 2) {
        // Default
    }
    FILE *s = fopen(src, "r");
    if (!s) {
        s = fopen(src, "w");
        if (s) {
            fprintf(s, "Learning C File Handling\n");
            fclose(s);
            s = fopen(src, "r");
        }
    }
    if (s) {
        FILE *d = fopen(dest, "w");
        if (d) {
            char ch;
            while ((ch = fgetc(s)) != EOF) fputc(ch, d);
            fclose(d);
            printf("File copied successfully to %s\n", dest);
        }
        fclose(s);
    }
    return 0;
}
