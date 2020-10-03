#include<stdio.h>

void mergeSort(int [],int,int);
void merge(int [],int,int,int);

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
    mergeSort(a,0,n);
    printf("Sorted array\n");
    for(j=0;j<n;j++)
        printf("%d\t",a[j]);
}

void mergeSort(int a[],int l,int r)
{
    if(l<r)
    {
        int m=(l+r)/2;
        mergeSort(a,l,m);
        mergeSort(a,m+1,r);
        merge(a,l,m,r);

    }
}

void merge(int a[],int l,int m,int r)
{
    int i,j,t,n2,k;
    int n1=m-l+1;
    n2=r-m;
    int L[n1],R[n2];
    for(i=0;i<n1;i++)
        L[i]=a[l+i];
    for(j=0;j<n2;j++)
        R[j]=a[m+1+j];
    i=0,j=0,k=l;
    while(i<n1&&j<n2)
    {
        if(L[i]<=R[j])
        {
            a[k]=L[i];
            i++;
        }
        else
        {
            a[k]=R[j];
            j++;
        }
        k++;
    }
    while(j<n2)
    {
        a[k]=R[j];
        j++;
        k++;
    }

}
