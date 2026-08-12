/*
Q5: Write a program to convert temperature from Celsius to Fahrenheit.

Sample Test Cases:
Input 1: 0
Output 1: Fahrenheit=32

Input 2: 100
Output 2: Fahrenheit=212
*/

#include <stdio.h>

int main()
{
    float c;
    if (scanf("%f", &c) == 1)
    {
        float f = (c * 9.0f / 5.0f) + 32.0f;
        if (f == (int)f)
        {
            printf("Fahrenheit=%d\n", (int)f);
        }
        else
        {
            printf("Fahrenheit=%.2f\n", f);
        }
    }
    return 0;
}
