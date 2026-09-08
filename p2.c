#include<stdio.h>
int factorial(int n)
{
    if(n==1)
    return 1;
    else
    return n*factorial(n-1);
}
    int main()
   {
    int n;
    printf("Enter A Number:");
    scanf("%d", &n);
   int t = factorial(n);
   printf("Factorial %d", t);
   return 0;
}