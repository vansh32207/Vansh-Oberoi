/*
Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90

*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main(void) {
    struct Student s = {"Asha", 101, 90};
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
    return 0;
}
