#include<stdio.h>
int main()
{
    int n[5];
    int a[5]={10,20,30,40,50};
    for(int i=0;i<5;i++)
    {
        n[i]=a[i];
        printf("%d\n", n[i]);
    }
    return 0;
}