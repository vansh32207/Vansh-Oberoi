#include<stdio.h>
int main()
{
    int s=0;
    int a[5]={10,20,30,40,50};
    for(int i=0;i<5;i++)
    {
        s=s+a[i];
        printf("%d\n", a[i]);
    }
    printf("%d", s);
    return 0;
}