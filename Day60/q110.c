/*
Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

Sample Test Cases:
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr[5, 1, 3, 4, 2] = , k = 1
Output 2:
5 1 3 4 2

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char line[1000];
    if (fgets(line, sizeof(line), stdin)) {
        int arr[100], n = 0, k = 1;
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
        char *k_ptr = strstr(line, "k =");
        if (k_ptr) k = atoi(k_ptr + 3);
        for (int i = 0; i <= n - k; i++) {
            int m = arr[i];
            for (int j = 1; j < k; j++) {
                if (arr[i + j] > m) m = arr[i + j];
            }
            printf("%d%c", m, (i == n - k) ? '\n' : ' ');
        }
    }
    return 0;
}
