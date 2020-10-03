#include<stdio.h>
int fact(int);
main()
{
    int n,c;
    printf("enter no.\n");
    scanf("%d",&n);
    c=fact(n);
    printf("%d",c);
}
int fact(int x)
{
    if(x==0)
        return 1;
    else
        return x*fact(x-1);
}

