/*
Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/

#include <stdio.h>
#include <string.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main(void) {
    char input[50];
    if (scanf("%s", input) == 1) {
        if (strcmp(input, "SUCCESS") == 0) printf("Operation successful\n");
        else if (strcmp(input, "FAILURE") == 0) printf("Operation failed\n");
        else if (strcmp(input, "TIMEOUT") == 0) printf("Operation timed out\n");
    } else {
        printf("Operation failed\n");
    }
    return 0;
}
