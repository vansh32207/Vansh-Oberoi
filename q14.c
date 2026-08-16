/*
Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

Sample Test Cases:
Input 1: a
Output 1: Vowel

Input 2: b
Output 2: Consonant
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    if (scanf(" %c", &ch) == 1)
    {
        char l = tolower(ch);
        if (l >= 'a' && l <= 'z')
        {
            if (l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u')
            {
                printf("Vowel\n");
            }
            else
            {
                printf("Consonant\n");
            }
        }
        else
        {
            printf("Not an alphabet\n");
        }
    }
    return 0;
}
