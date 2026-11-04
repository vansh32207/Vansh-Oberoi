/*
Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/

#include <stdio.h>
#include <string.h>

enum Role { ADMIN, USER, GUEST };

int main(void) {
    char role[50];
    if (scanf("%s", role) == 1) {
        if (strcmp(role, "ADMIN") == 0) printf("Welcome Admin!\n");
        else if (strcmp(role, "USER") == 0) printf("Welcome User!\n");
        else if (strcmp(role, "GUEST") == 0) printf("Welcome Guest!\n");
    } else {
        printf("Welcome Guest!\n");
    }
    return 0;
}
