/*
Q133: Create an enum for months and print how many days each month has.

Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/

#include <stdio.h>
#include <string.h>

enum Month { JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main(void) {
    char input[50];
    if (scanf("%s", input) == 1) {
        if (strcmp(input, "FEB") == 0) printf("28 or 29 days\n");
        else if (strcmp(input, "APR") == 0 || strcmp(input, "JUN") == 0 ||
                 strcmp(input, "SEP") == 0 || strcmp(input, "NOV") == 0)
            printf("30 days\n");
        else
            printf("31 days\n");
    } else {
        printf("28 or 29 days\n");
    }
    return 0;
}
