/*
Q63: Merge two arrays.

Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/

#include <stdio.h>

int main(void) {
    int n1, n2;
    if (scanf("%d", &n1) == 1) {
        int a1[100], a2[100];
        for (int i = 0; i < n1; i++) scanf("%d", &a1[i]);
        if (scanf("%d", &n2) == 1) {
            for (int i = 0; i < n2; i++) scanf("%d", &a2[i]);
            for (int i = 0; i < n1; i++) printf("%d ", a1[i]);
            for (int i = 0; i < n2; i++) printf("%d%c", a2[i], (i == n2 - 1) ? '\n' : ' ');
        }
    }
    return 0;
}
