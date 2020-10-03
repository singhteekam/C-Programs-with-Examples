#include<stdio.h>
int min(int a,int b)
{
    return a<b?a:b;

}
int main()
{
    int n,j,x;
    printf("enter size of array and element to be searched");
    scanf("%d%d",&n,&x);
    int arr[n];
    printf("enter elements of array");
    for(j=0;j<n;j++)
        scanf("%d",&arr[j]);
    if(arr[0]==x)
    {
    printf("element is present at index 0");
        return 0;
    }
    int i=1;
    while(i<n&&arr[i]<=x)
        i=i*2;
    return bs(arr,i/2,min(i,n),x);
}
int bs(int arr[],int l,int r,int x)
{

    if(r>=l)
    {
        int mid=l+(r-1)/2;
        if(arr[mid]==x)
        {
            printf("present at %d index",mid);
            return mid;
        }
        if(arr[mid]>x)
        {
            return bs(arr,l,mid-1,x);
        }
        return bs(arr,mid+1,r,x);

    }
}
