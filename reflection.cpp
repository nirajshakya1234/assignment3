   #include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<string.h>
#include<dos.h>
int main()
{
 int gd=DETECT,gm,ch;
 initgraph(&gd,&gm,"c:\\turbo c3\\bgi");
 cleardevice();
 int x1=50,y1=150,x2=75,y2=125,x3=100,y3=150,xt;
 printf("\n\n\n triangle before reflection");
 line(x1,y1,x2,y2);
 line(x1,y1,x3,y3);
 line(x2,y2,x3,y3);
 getch();
 cleardevice();
 printf("\n\n\n triangle after reflection");
 line(x1,-y1+500,x2,-y2+500);
 line(x1,-y1+500,x3,-y3+500);
 line(x2,-y2+500,x3,-y3+500);
 delay(1000);
 getch();
 closegraph();
 return(0);
}
