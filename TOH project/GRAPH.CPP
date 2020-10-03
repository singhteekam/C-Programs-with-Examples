#include<stdio.h>
#include<graphics.h>
#include<ctype.h>
#include<conio.h>
int main()
{
int gd=0,gm;
setbkcolor(GREEN);
initgraph(&gd,&gm,"C:/tc/bgi");
circle(400,200,50);
getch();
closegraph();
return 0;
}