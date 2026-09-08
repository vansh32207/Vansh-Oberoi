#include<stdio.h>
int factorial(int n)
{
    printf("%d\n", n*factorial(n-1));
}
int main()
{
    int n;
    printf("Enter A Number:");
    scanf("%d", &n);
    factorial(n);
return 0;
}