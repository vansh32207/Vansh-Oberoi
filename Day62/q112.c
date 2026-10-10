/*
Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

Sample Test Cases:
Input 1:
arr[] = [2, 3, -8, 7, -1, 2, 3]
Output 1:
11

Input 2:
arr[] = [-2, -4]
Output 2:
-2

Input 3:
arr[] = [5, 4, 1, 7, 8]
Output 3:
25

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char line[1000];
    if (fgets(line, sizeof(line), stdin)) {
        int arr[100], n = 0;
        char *p = strchr(line, '[');
        char *end = strchr(line, ']');
        if (p && end) {
            char buf[500];
            strncpy(buf, p + 1, end - p - 1);
            buf[end - p - 1] = '\0';
            char *tok = strtok(buf, ", ");
            while (tok) {
                arr[n++] = atoi(tok);
                tok = strtok(NULL, ", ");
            }
        }
        if (n > 0) {
            int max_so_far = arr[0], curr_max = arr[0];
            for (int i = 1; i < n; i++) {
                curr_max = (arr[i] > curr_max + arr[i]) ? arr[i] : (curr_max + arr[i]);
                if (curr_max > max_so_far) max_so_far = curr_max;
            }
            printf("%d\n", max_so_far);
        }
    }
    return 0;
}
