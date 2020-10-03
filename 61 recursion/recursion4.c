#include<stdio.h>
int pow(int,int);
main()
{
    int n,m,c;
    printf("enter no.\n");
    scanf("%d%d",&n,&m);
    c=pow(n,m);
    printf("%d",c);
}
int pow(int x,int y)
{
    if(y==0)
        return 1;
    else
        return x*pow(x,y-1);
}

