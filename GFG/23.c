/* example
   18  20  15  30  10  14
   1st player picks 18,now row of coins is 20  15  30  10  14
   2st player picks 20,now row of coins is 15  30  10  14
   1st player picks 15,now row of coins is 30  10  14
   2st player picks 30,now row of coins is 10  14
   1st player picks 14,now row of coins is 10
   2nd picks 10,game over.
    total value by 2nd is 20 more than 1st, so 2nd wins  */
#include<stdio.h>
int main()
{
    int n,p1,p2,sp1=0,sp2=0,i,j;
    printf("enter the no. of coins");
    scanf("%d",&n);
    int a[n];
    printf("enter coins\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("enter 1 if p1 starts else 0 if p2 starts");
    scanf("%d",&p1);
    if(p1==1)
    {
        for(j=0;j<n;)
        {
            if(j%2==0)
            {
            if(a[j]>a[n-1])
             {
                 sp1=sp1+a[j];
                 j=j+1;
             }
            else
                sp1=sp1+a[n-1];
                n=n-1;
             }
             else
             {
            if(a[j]>a[n-1])
             {
                 sp2=sp2+a[j];
                 j=j+1;
             }
            else
                sp2=sp2+a[n-1];
                n=n-1;
             }
        }
    }
        else
        {
            if(p2==0)
       {
        for(j=0;j<n;j--)
        {
            if(j%2!=0)
            {
            if(a[j]>a[n-1])
             {
                 sp1=sp1+a[j];
                 j=j+1;
             }
            else
                sp1=sp1+a[n-1];
                n=n-1;
             }
             else
             {
            if(a[j]>a[n-1])
             {
                 sp2=sp2+a[j];
                 j=j+1;
             }
            else
                sp2=sp2+a[n-1];
                n=n-1;
             }
        }
       }

    }


if(sp1>sp2)
    printf("1st player wins by %d coins",sp1-sp2);
else
  printf("2st player wins by %d coins",sp2-sp1);
}
