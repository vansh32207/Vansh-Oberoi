/*
Q69: Find the second largest element in an array.

Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/

#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) == 1 && n >= 2) {
        int arr[100];
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        int max1 = -1e9, max2 = -1e9;
        for (int i = 0; i < n; i++) {
            if (arr[i] > max1) {
                max2 = max1;
                max1 = arr[i];
            } else if (arr[i] > max2 && arr[i] != max1) {
                max2 = arr[i];
            }
        }
        printf("%d\n", max2);
    }
    return 0;
}
