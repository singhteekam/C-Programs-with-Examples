#include<stdio.h>
int main()
{
    int n,i,s=0;
    printf("enter the no.");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    {
        if(n%i==0)
            s=s+i;

    }
     printf("sum is %d",s);
     return 0;
}
/*input n=30  output=24
odd dividers sum=1+3+5+15=24*/