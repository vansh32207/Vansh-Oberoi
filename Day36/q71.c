/*
Q71: Read and print a matrix.

Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/

#include <stdio.h>

int main(void) {
    int r, c;
    if (scanf("%d %d", &r, &c) == 2) {
        int m[50][50];
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                scanf("%d", &m[i][j]);
                printf("%d%c", m[i][j], (j == c - 1) ? '\n' : ' ');
            }
        }
    }
    return 0;
}
