/*
Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/

#include <stdio.h>
#include <string.h>

enum Menu { ADD, SUBTRACT, MULTIPLY };

int main(void) {
    char op[20];
    int a, b;
    if (scanf("%s %d %d", op, &a, &b) == 3) {
        if (strcmp(op, "ADD") == 0) printf("%d\n", a + b);
        else if (strcmp(op, "SUBTRACT") == 0) printf("%d\n", a - b);
        else if (strcmp(op, "MULTIPLY") == 0) printf("%d\n", a * b);
    }
    return 0;
}
