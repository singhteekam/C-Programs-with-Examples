#include<stdio.h>
#include<math.h>
int rev(int,int);
main()
{
    int n,num,c,l=0;
    printf("enter no.\n");
    scanf("%d",&n);
    num=n;
    while(num!=0)
    {
        l++;
        num=num/10;
    }
    c=rev(n,l);
    printf("%d",c);
}
int rev(int x,int y)
{

    if(y==1)
        return x;
    else
        return (x%10)*pow(10,y-1)+rev(x/10,--y);
}

