#include<stdio.h>
int add(int x,int y)
{
    return printf("%*c%*c",x,' ',y,' ');
}
int main()
{

    printf("sum =%d",add(3,4));
}
