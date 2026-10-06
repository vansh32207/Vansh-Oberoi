/*
Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

Sample Test Cases:
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]
Output 2:
[0,0,9,0,0]

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
        printf("[");
        for (int i = 0; i < n; i++) {
            long long prod = 1;
            for (int j = 0; j < n; j++) {
                if (i != j) prod *= nums[j];
            }
            printf("%lld%s", prod, (i == n - 1) ? "]\n" : ",");
        }
    }
    return 0;
}
