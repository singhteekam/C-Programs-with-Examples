#include<stdio.h>
int main()
{
    int n,x,i,p;
    printf("enter size of array and element to be searched");
    scanf("%d%d",&n,&x);
    int arr[n];
    printf("enter array elements");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int lo=0,hi=n-1;
    //since array is sorted ,element present in array must be in range
    while(lo<=hi&&x>=arr[lo]&&x<=arr[hi])
    {
        //probing the position
        int pos=lo+(((double)(hi-lo)/(arr[hi]-arr[lo]))*(x-arr[lo]));
        //condition of target found
        if(arr[pos]==x)
        {
            p=pos;
            printf("element found at index %d",p);
            return pos;
        }
        //if x is larger is in upper part
        if(arr[pos]<x)
            lo=pos+1;
        //if x is smaller,x is in lower part
        else
            hi=pos-1;

    }


}
