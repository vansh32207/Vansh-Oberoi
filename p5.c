#include<stdio.h>
int count_digits(int n)
{
    int c=0;
    while(n>0)
    {
        int b =n%10;
        c++;
        n=n/10;
    }
    printf("%d",c);
}
    int main()
    {
        int n;
        printf("Enter A Number:");
        scanf("%d", &n);
        count_digits(n);
        return 0;
    }