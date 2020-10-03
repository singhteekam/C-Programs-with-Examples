/*  input n=4
    1
    5  2
    8  6  3
    10 9  7  4

    input n=6
    1
    7   2
    12  8   3
    16 13  9  4
    19 17 14 10 5
    21 20 18 15 11 6
    */
#include<stdio.h>
int main()
{
    int n,p=1,i,j,m,k=1,q,r;
    printf("enter no. of rows");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=1;j++)
        {
            printf("%d\t",p);
            if(i>1)
            {  r=k;
                for(m=2;m<=i;m++)
                {
                    q=r-(n-1)+(i-m);
                    r=q;
                    printf("%d\t",q);
                }
            }

            }
             printf("\n");

        p=k+n-(i-1);
        k=p;
    }
}



