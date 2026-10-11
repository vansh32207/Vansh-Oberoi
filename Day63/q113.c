/*
Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.

Sample Test Cases:
Input 1:
arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output 1:
5

Input 2:
arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output 2:
7

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

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
        qsort(arr, n, sizeof(int), cmp);
        if (k >= 1 && k <= n) printf("%d\n", arr[k - 1]);
    }
    return 0;
}
