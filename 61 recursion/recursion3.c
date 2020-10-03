#include<stdio.h>
int fibo(int);
main()
{
    int n,c;
    printf("enter no.\n");
    scanf("%d",&n);
    fibo(n);
    for(int i=1;i<=n;i++)
    printf("%d",fibo(i));
}
int fibo(int x)
{

    if(x==1)
    return 0;
    if(x==2)
        return 1;
    else
        return fibo(x-1)+fibo(x-2);
}

