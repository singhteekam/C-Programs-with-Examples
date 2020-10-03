#include<math.h>
#include<stdio.h>
int main()
{
    int a,b,c,d,i,j,k,l;
    printf("enter size of 4D array");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int arr[a][b][c][d];
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
    printf("displaying 4 D array");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            for(k=0;k<c;k++)
            {
                for(l=0;l<d;l++)
                {
                    printf("%d\t",arr[i][j][k][l]);
                }
                printf("\t\t");
            }
            printf("\t\t\t");
        }
        printf("\n");
    }
    return 0;
}
