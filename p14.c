#include<stdio.h>
int main()
{
    int n[5];
    int a;
    int c=0;
    for(int i=0;i<5;i++)
    {
    printf("Enter A Number:");
    scanf("%d", &n[i]);
    }
    printf("Enter A Number To Search:");
    scanf("%d", &a);
    for(int i=0;i<5;i++)
    {
        if(n[i]==a)
        c++;
    }
    if(c==0)
    printf("Number Not Found");
    else
    printf("Number Found");
    return 0;
}
