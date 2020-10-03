/*JUMP SEARCH
ARRAY MUST BE SORTED
*/
#include<stdio.h>
#include<math.h>
int min(int a,int b)
{
    return a<b?a:b;

}
int main()
{

    int x,n,i,p;
    printf("enter size of array and no. to be searched");
    scanf("%d%d",&n,&x);
    int arr[n];
    printf("enter array elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int step=sqrt(n);
    int prev=0;
    while(arr[min(step,n)-1]<x)
    {
        prev=step;
        step+=sqrt(n);
        if(prev>=n)
            return -1;
    }
    //doing linear search
    while(arr[prev]<x)
    {
        prev++;
        if(prev==min(step,n))
            return -1;
    }
    if(arr[prev]==x)
    {
        p=prev;
        printf("element searched successfully at position %d",p+1);
        return prev;
        return -1;
    }

}
