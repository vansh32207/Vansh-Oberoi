int main()
{
    int n[5];
    int c=0;
    int w=0;
    for(int i=0;i<5;i++)
    {
    printf("Enter A Number:");
    scanf("%d", &n[i]);
    }
    for(int i=0;i<5;i++)
    {
        if(n[w]==n[i])
        c++;
    }
    if(c==0)
    printf("Number Not Found");
    else
    printf("%d", c);
    w++;
    return 0;
}