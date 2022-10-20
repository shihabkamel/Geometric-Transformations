#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main(){
int gd=DETECT,gm,errorcode;
int x1,x2,y1,y2,sc;
initgraph(&gd,&gm,"");
cout<<"Enter the X1 coordinate:";
cin>>x1;
cout<<"Enter the y1 coordinate:";
cin>>y1;
cout<<"Enter the X2 coordinate:";
cin>>x2;
cout<<"Enter the y2 coordinate:";
cin>>y2;
line(x1,y1,x2,y2);
cout<<"Enter the scale size: ";
cin>>sc;
line(x1,y1-sc,x2,y2+sc);
getch();
closegraph();
}
