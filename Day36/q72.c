/*
Q72: Find the sum of all elements in a matrix.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/

#include <stdio.h>

int main(void) {
    int r, c;
    if (scanf("%d %d", &r, &c) == 2) {
        int sum = 0, val;
        for (int i = 0; i < r * c; i++) {
            scanf("%d", &val);
            sum += val;
        }
        printf("%d\n", sum);
    }
    return 0;
}
