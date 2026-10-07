/*
Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

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
        if (n >= k && k > 0) {
            int max_sum = -1e9;
            for (int i = 0; i <= n - k; i++) {
                int sum = 0;
                for (int j = 0; j < k; j++) sum += arr[i + j];
                if (sum > max_sum) max_sum = sum;
            }
            printf("%d\n", max_sum);
        }
    }
    return 0;
}
