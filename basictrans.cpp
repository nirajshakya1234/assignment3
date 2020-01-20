#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
#include<conio.h>
#include<string.h>
int main()
{
    int gd=DETECT,gm,ch;
    initgraph(&gd,&gm,"c:\\turbo c3\\bgi");
    cleardevice();
    printf("\t1. translaton \n\n\t2.rotation\n\n\t3.scaling\n\n");
    printf("enter your choice");
    scanf("%d",&ch);
    switch(ch)
    {
        case1:
            {

                int tx=50, ty=50, x1=100, x2=230, y1=100, y2= 70;
                cleardevice();
                printf("rectangle before translation");
                rectangle(x1,y1,x2,y2);
                getch ();
                cleardevice();
                printf("rectangle after translation");
                rectangle(x1+tx,y1+ty,x2+tx,y2+ty);
                getch();
                main();
            }
            case2:
                {
                    long x1=100,y1=100,x2=200,y2=200;
                    double d1,xt,yt;
                    printf("\n\n\n\ enter the angle of rotation");
                    scanf("%1f",&d1);
                    cleardevice();
                    d1=(d1*3.14)/180.0;
                    xt=x1+((x2-x1)*cos(d1)-(y2-y1)*sin(d1));
                    yt=y1+((x2-x1)*sin(d1)+(y2-y1)*cos(d1));
                    line(x1,y1,x2,y2);
                    getch();
                    cleardevice();
                    printf("line after rotation");
                    line(x1,y1,(int)xt,(int)yt);
                    getch();
                    main();
                }
                case3:
                    {
                        int x1=30,y1=30,x2=70,y2=70,y=2,x=2;
                        cleardevice();
                        printf("rectangle before scaling");
                        getch();
                        cleardevice();
                        printf("rectangle after scaling");
                        rectangle(x1*x,y1*y,x2*x,y2*y);
                        getch();
                        main();
                    }
    }
    printf("NIRAJ SHAKYA");
    closegraph();
    return(0);
}
