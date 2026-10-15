/*
Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void parse_arr(const char *str, int *arr, int *n) {
    *n = 0;
    char *p = strchr(str, '[');
    char *end = strchr(str, ']');
    if (p && end) {
        char buf[500];
        strncpy(buf, p + 1, end - p - 1);
        buf[end - p - 1] = '\0';
        char *tok = strtok(buf, ", ");
        while (tok) {
            arr[(*n)++] = atoi(tok);
            tok = strtok(NULL, ", ");
        }
    }
}

int main(void) {
    char line[1000];
    if (fgets(line, sizeof(line), stdin)) {
        int a[100], b[100], na = 0, nb = 0;
        char *n2 = strstr(line, "nums2");
        if (n2) {
            char line1[500];
            strncpy(line1, line, n2 - line);
            line1[n2 - line] = '\0';
            parse_arr(line1, a, &na);
            parse_arr(n2, b, &nb);
        }
        int i = 0, j = 0, first = 1;
        while (i < na && j < nb) {
            if (!first) printf(" ");
            if (a[i] <= b[j]) printf("%d", a[i++]);
            else printf("%d", b[j++]);
            first = 0;
        }
        while (i < na) {
            if (!first) printf(" ");
            printf("%d", a[i++]);
            first = 0;
        }
        while (j < nb) {
            if (!first) printf(" ");
            printf("%d", b[j++]);
            first = 0;
        }
        printf("\n");
    }
    return 0;
}
