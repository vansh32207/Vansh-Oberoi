/*
Q73: Find the sum of each row of a matrix and store it in an array.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/

#include <stdio.h>

int main(void) {
    int r, c;
    if (scanf("%d %d", &r, &c) == 2) {
        for (int i = 0; i < r; i++) {
            int row_sum = 0, val;
            for (int j = 0; j < c; j++) {
                scanf("%d", &val);
                row_sum += val;
            }
            printf("%d%c", row_sum, (i == r - 1) ? '\n' : ' ');
        }
    }
    return 0;
}
