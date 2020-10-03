#include<stdio.h>
#include<graphics.h>
#include<ctype.h>
#include<conio.h>
int main()
{
int gd=0,gm;
setbkcolor(GREEN);
initgraph(&gd,&gm,"C:\\TC\\BGI");

outtextxy(260,25,"TOWER OF HANOI");
line(10,180,50,180);
line(30,180,30,60);
ellipse(30,160,0,360,18,9);
ellipse(30,130,0,360,16,8);
ellipse(30,100,0,360,14,7);
outtextxy(29,200,"A");

line(55,180,95,180);
line(75,180,75,60);
outtextxy(74,200,"B");

line(100,180,140,180);
line(120,180,120,60);
outtextxy(119,200,"C");
outtextxy(74,220,"(1)");

line(150,180,190,180);
line(175,180,175,60);
ellipse(175,160,0,360,18,9);
ellipse(175,130,0,360,16,8);
outtextxy(174,200,"A");

line(195,180,235,180);
line(215,180,215,60);
outtextxy(214,200,"B");

line(240,180,280,180);
line(260,180,260,60);
ellipse(260,160,0,360,14,7);
outtextxy(259,200,"C");
outtextxy(214,220,"(2)");

line(290,180,330,180);
line(310,180,310,60);
ellipse(310,160,0,360,18,9);
outtextxy(309,200,"A");

line(335,180,375,180);
line(355,180,355,60);
ellipse(355,160,0,360,16,8);
outtextxy(354,200,"B");

line(380,180,420,180);
line(400,180,400,60);
ellipse(400,160,0,360,14,7);
outtextxy(399,200,"C");
outtextxy(354,220,"(3)");

line(430,180,470,180);
line(450,180,450,60);
ellipse(450,160,0,360,18,9);
outtextxy(449,200,"A");

line(475,180,515,180);
line(495,180,495,60);
ellipse(495,160,0,360,16,8);
ellipse(495,130,0,360,14,7);
outtextxy(494,200,"B");

line(520,180,560,180);
line(540,180,540,60);
outtextxy(539,200,"C");
outtextxy(494,220,"(4)");


line(10,420,50,420);
line(30,420,30,300);
outtextxy(29,440,"A");

line(55,420,95,420);
line(75,420,75,300);
ellipse(75,400,0,360,16,8);
ellipse(75,370,0,360,14,7);
outtextxy(74,440,"B");

line(100,420,140,420);
line(120,420,120,300);
ellipse(120,400,0,360,18,9);
outtextxy(119,440,"C");
outtextxy(74,460,"(5)");

line(150,420,190,420);
line(175,420,175,300);
ellipse(175,400,0,360,14,7);
outtextxy(174,440,"A");

line(195,420,235,420);
line(215,420,215,300);
ellipse(215,400,0,360,16,8);
outtextxy(214,440,"B");

line(240,420,280,420);
line(260,420,260,300);
ellipse(260,400,0,360,18,9);
outtextxy(259,440,"C");
outtextxy(214,460,"(6)");

line(290,420,330,420);
line(310,420,310,300);
ellipse(310,400,0,360,14,7);
outtextxy(309,440,"A");

line(335,420,375,420);
line(355,420,355,300);
outtextxy(354,440,"B");

line(380,420,420,420);
line(400,420,400,300);
ellipse(400,400,0,360,18,9);
ellipse(400,370,0,360,16,8);
outtextxy(399,440,"C");
outtextxy(354,460,"(7)");


line(430,420,470,420);
line(450,420,450,300);
outtextxy(449,440,"A");

line(475,420,515,420);
line(495,420,495,300);
outtextxy(494,440,"B");

line(520,420,560,420);
line(540,420,540,300);
ellipse(540,400,0,360,18,9);
ellipse(540,370,0,360,16,8);
ellipse(540,340,0,360,14,7);
outtextxy(539,440,"C");
outtextxy(494,460,"(8)");






getch();
closegraph();
return 0;
}