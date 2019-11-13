#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void rainbow()
{
    // auto detection
    int gdriver = DETECT,gmode;
    int x, y, i, j;
    initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");

    x = 0; //getmaxx() / 2;//finding centre x-ordinate of screen
    y = 0; // getmaxy() / 2;//finding centre y-ordinate of screen

    for (i=50; i<300; i++)
    {
	// delay function under dos.h for holding the
	// function for some time
	delay(100);

	// selecting  color for making of rainbow
	setcolor(i/10);

	// making of arc with fixed centre and increasing radius
	circle(x+i, y+i,80);
    }
}



// driver program
void main()
{
    rainbow();
    closegraph();
    getch();
} 
