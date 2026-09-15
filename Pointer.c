#include<stdio.h>
int main ()
{
    int n;
    int *p; 
    scanf("%d",&n);
    p =&n;
    printf("%d",n);
    printf("%p",&n);
    printf("%p",p);
    printf("%u",*p);
}
