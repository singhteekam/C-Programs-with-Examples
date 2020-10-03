#include<stdio.h>
int main()
{
    int n,y,w,p;
    printf("enter the no. of days");
    scanf("%d",&n);
    y=n/365;
      printf("years=%d\n",y);
      p=n-y*365;
      w=p/7;
        printf("weeks=%d\n",w);
        p=n-y*365-w*7;
          printf("days=%d",p);
    return 0;
}
