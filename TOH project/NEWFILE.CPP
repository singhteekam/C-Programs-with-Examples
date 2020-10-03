#include<graphics.h>
#include<ctype.h>
#include<conio.h>
int main()
{
int gd=DETECT,gm;
setbkcolor(GREEN);
initgraph(&gd,&gm,"C:/TURBOC3/BGI");
circle(400,200,50);
getch();
closegraph();
return 0;
}