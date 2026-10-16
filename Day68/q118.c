/*
Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char line[1000];
    if (fgets(line, sizeof(line), stdin)) {
        int nums[100], n = 0;
        char *p = strchr(line, '[');
        char *end = strchr(line, ']');
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
        int expected_sum = n * (n + 1) / 2;
        int actual_sum = 0;
        for (int i = 0; i < n; i++) actual_sum += nums[i];
        printf("%d\n", expected_sum - actual_sum);
    }
    return 0;
}
