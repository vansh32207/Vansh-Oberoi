/*
Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/

#include <stdio.h>
#include <string.h>

enum TrafficLight { RED, YELLOW, GREEN };

int main(void) {
    char input[50];
    if (scanf("%s", input) == 1) {
        if (strcmp(input, "RED") == 0) printf("Stop\n");
        else if (strcmp(input, "YELLOW") == 0) printf("Wait\n");
        else if (strcmp(input, "GREEN") == 0) printf("Go\n");
    } else {
        printf("Go\n");
    }
    return 0;
}
