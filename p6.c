#include<stdio.h>
int calculate_power(int n, int a)
{
    int p=1;
    for(int i=1;i<=a;i++)
    {
        p=p*n;
    }
    printf("%d",p);
}
int mains()
{
    int n,a;
    printf("Enter A Number And Power:");
    scanf("%d %d", &n,&a);
    calculate_power(n,a);
    return 0; 
}
