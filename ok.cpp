
#include<stdio.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    line(10,10,100,130);

    getch();
    closegraph();
}
