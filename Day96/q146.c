/*
Q146: Create Employee structure with nested Date structure for joining date and print details.

Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/

#include <stdio.h>

struct Date {
    int d, m, y;
};

struct Employee {
    char name[50];
    int id;
    struct Date join;
};

int main(void) {
    struct Employee e = {"Raj", 11, {12, 5, 2020}};
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n", e.name, e.id, e.join.d, e.join.m, e.join.y);
    return 0;
}
