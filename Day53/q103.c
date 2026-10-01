/*
Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.

Sample Test Cases:
Input 1:
nums = [1,7,3,6,5,6]
Output 1:
3

Input 2:
nums = [1,2,3]
Output 2:
-1

Input 3:
nums = [2,1,-1]
Output 3:
0

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char line[1000];
    if (fgets(line, sizeof(line), stdin)) {
        int nums[100], n = 0;
        char *p = strstr(line, "[");
        char *end = strstr(line, "]");
        if (p && end) {
            char buf[500];
            strncpy(buf, p + 1, end - p - 1);
            buf[end - p - 1] = '\0';
            char *tok = strtok(buf, ", ");
            while (tok) {
                nums[n++] = atoi(tok);
                tok = strtok(NULL, ", ");
            }
        }
        int total = 0;
        for (int i = 0; i < n; i++) total += nums[i];
        int left = 0, pivot = -1;
        for (int i = 0; i < n; i++) {
            if (left == total - left - nums[i]) {
                pivot = i;
                break;
            }
            left += nums[i];
        }
        printf("%d\n", pivot);
    }
    return 0;
}
