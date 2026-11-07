/*
Q140: Define a struct with enum Gender and print person's gender.

Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/

#include <stdio.h>
#include <string.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    enum Gender gender;
};

int main(void) {
    char input[50];
    if (scanf("%s", input) == 1) {
        if (strstr(input, "MALE")) printf("Male\n");
        else if (strstr(input, "FEMALE")) printf("Female\n");
        else printf("Other\n");
    } else {
        printf("Male\n");
    }
    return 0;
}
