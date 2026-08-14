/*
Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

Sample Test Cases:
Input 1: 1000 5 2
Output 1: Simple Interest=100, Compound Interest=102.5

Input 2: 5000 7 3
Output 2: Simple Interest=1050, Compound Interest=1125.76
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    double p, r, t;
    if (scanf("%lf %lf %lf", &p, &r, &t) == 3)
    {
        double si = (p * r * t) / 100.0;
        double ci = p * (pow(1.0 + r / 100.0, t) - 1.0);

        if (si == (int)si)
        {
            printf("Simple Interest=%.0f, ", si);
        }
        else
        {
            printf("Simple Interest=%.2f, ", si);
        }

        char ci_str[32];
        snprintf(ci_str, sizeof(ci_str), "%.2f", ci);
        size_t len = strlen(ci_str);
        if (ci_str[len - 1] == '0' && ci_str[len - 2] != '.')
        {
            ci_str[len - 1] = '\0';
        }
        printf("Compound Interest=%s\n", ci_str);
    }
    return 0;
}
