/*
Q76: Check if a matrix is symmetric.

Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/

#include <stdio.h>

int main(void) {
    int r, c;
    if (scanf("%d %d", &r, &c) == 2) {
        int m[50][50];
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) scanf("%d", &m[i][j]);
        }
        if (r != c) {
            printf("False\n");
            return 0;
        }
        int sym = 1;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (m[i][j] != m[j][i]) {
                    sym = 0;
                    break;
                }
            }
        }
        printf("%s\n", sym ? "True" : "False");
    }
    return 0;
}
