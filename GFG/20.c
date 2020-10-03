#include<math.h>
#include<stdio.h>
int main()
{
    int a,b,c,d,i,j,k,l;
    printf("enter size of 4D array\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int arr[a][b][c][d],brr[a][b][c][d],crr[a][b][c][d];
    printf("enter the 1st 4D array ");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            for(k=0;k<c;k++)
            {
                for(l=0;l<d;l++)
                {
                    scanf("%d",&arr[i][j][k][l]);
                }
            }
        }
    }
    printf("enter 2nd 4D array");
     for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            for(k=0;k<c;k++)
            {
                for(l=0;l<d;l++)
                {
                    scanf("%d",&brr[i][j][k][l]);
                }
            }
        }
    }
    printf("sum of two arrays is\n");
     for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            for(k=0;k<c;k++)
            {
                for(l=0;l<d;l++)
                {
                    crr[i][j][k][l]=arr[i][j][k][l]+brr[i][j][k][l];
                    printf("%d\t",crr[i][j][k][l]);
                }
                printf("\t\t");
            }
            printf("\t\t\t");
        }
        printf("\n");
    }
}


