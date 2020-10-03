#include<stdio.h>
int hcf(int,int);
main()
{
    int n,c,m;
    printf("enter no.\n");
    scanf("%d%d",&n,&m);
    c=hcf(n,m);
    printf("%d",c);
}
int hcf(int x,int y)
{
    if(y%x==0)
        return x;
    else
        return hcf(y%x,x);
}

