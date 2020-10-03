#include<stdio.h>

int QuickSort(int [],int,int);
int partition(int [],int,int);

void main()
{
    int n,i,j;
    printf("Enter no. of elements");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    a[n]=QuickSort(a,0,n);
    printf("Sorted array\n");
    for(j=0;j<n;j++)
        printf("%d\t",a[j]);
}

int QuickSort(int a[],int m,int n)
{
    int s;
    if(m==n)
    {
    return a[m];
    }
    else
    {
        s=partition(a,m,n);
        QuickSort(a,m,s-1);
        QuickSort(a,s+1,n);
         return a;
    }

}

int partition(int a[],int m,int n)
{
    int p,i,j,temp,tmp;
    p=a[m];
    i=m;
    for(j=m+1;j<=n;j++)
    {
        if(a[j]<=p)
        {
            i=i+1;
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
    }
    tmp=a[i];
    a[i]=a[m];
    a[m]=tmp;
    return i;

}


