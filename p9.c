#include<stdio.h>
int main()
{
    int n[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter A Number:");
        scanf("%d", &n[i]);
        printf("%d\n", n[i]);
    }
    return 0;
}