#include<stdio.h>
int sum(int);
main()
{
    int n,c;
    printf("enter no.\n");
    scanf("%d",&n);
    c=sum(n);
    printf("%d",c);
}
int sum(int x)
{
    if(x==0)
        return 0;
    else
        return x%10+sum(x/10);
}

