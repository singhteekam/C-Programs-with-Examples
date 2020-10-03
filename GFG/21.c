#include<math.h>
#include<stdio.h>
int main()
{
    int a,b,c,i,j,k;
    printf("enter size of 3D array");
    scanf("%d%d%d",&a,&b,&c);
    int arr[a][b][c];
    printf("enter the elements of 3D array");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            for(k=0;k<c;k++)
                {
                    scanf("%d",&arr[i][j][k]);
                }
            }
        }
    printf("displaying 3D array\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            for(k=0;k<c;k++)
                {
                    printf("%d\t",arr[i][j][k]);
                }
                printf("\t\t");
            }
            printf("\n");
        }
    return 0;
    }

