#include<stdio.h>
int is_even(int n)
{
    if(n%2==0)
    return 1;
    else
    return 0;
}
int main()
{
    int n;
    printf("Enter A Number: ");
    scanf("%d", &n);
    int t=is_even(n); 
    printf("%d", t);
}