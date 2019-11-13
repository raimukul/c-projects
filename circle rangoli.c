#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void rainbow()
{
    // auto detection
    int gdriver = DETECT,gmode;
    int x, y, i, j;
    initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");

    x = 0; 
    y = 0; 

    for (i=50; i<300; i++)
    {
	delay(100);
	setcolor(i/10);

	circle(x+i, y+i,80);
    }
}

void main()
{
    rainbow();
    closegraph();
    getch();
} 
