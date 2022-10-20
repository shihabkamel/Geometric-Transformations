#include<bits/stdc++.h>
#include<graphics.h>
#include<math.h>
#include<time.h>

using namespace std;
int main(){
int gd=DETECT,gm,errorcode;
int x1,x2,y1,y2;
double angle,s,c;
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
cleardevice();
//cout<<"Enter the rotation of angle:";
//cin>>angle;
for(int j=0;j<180;j++){
c=cos(j*3.1416/180);
s=sin(j*3.1416/180);
x1 = floor(x1 * c + y1 * s);
y1 = floor(-x1 * s + y1 * c);
x2 = floor(x2 * c + y2 * s);
y2 = floor(-x2 * s + y2 * c);
line(x1+200,y1+200,x2+200,y2+200);
delay(100);}
getch();
closegraph();
return 0;


}
