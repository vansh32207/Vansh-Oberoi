/*
Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

Sample Test Cases:
Input 1:
arr[] = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6

Input 2:
arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
arr[] = [12, 1, 3, 5], k = 3
Output 3:
0 0

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
            int first_neg = 0;
            for (int j = 0; j < k; j++) {
                if (arr[i + j] < 0) {
                    first_neg = arr[i + j];
                    break;
                }
            }
            printf("%d%c", first_neg, (i == n - k) ? '\n' : ' ');
        }
    }
    return 0;
}
