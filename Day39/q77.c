/*
Q77: Check if the elements on the diagonal of a matrix are distinct.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/

#include <stdio.h>

int main(void) {
    int r, c;
    if (scanf("%d %d", &r, &c) == 2) {
        int m[50][50];
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) scanf("%d", &m[i][j]);
        }
        int n = (r < c) ? r : c;
        int distinct = 1;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (m[i][i] == m[j][j]) {
                    distinct = 0;
                    break;
                }
            }
        }
        printf("%s\n", distinct ? "True" : "False");
    }
    return 0;
}
