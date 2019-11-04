#include <iostream>
#include <graphics.h>

int main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
int x0,y0,r;
cout<<"input centre of circle"<<"\n";
cin>>x0>>y0;
cout<<"input radius of circle"<<"\n";
cin>>r;
cleardevice();
int x=0,y=r;
float d=1.25-r;
while(y>x){
putpixel(x0+y,y0+x,WHITE);
putpixel(x0+x,y0+y,WHITE);
putpixel(x0-x,y0+y,WHITE);
putpixel(x0-y,y0+x,WHITE);
putpixel(x0-y,y0-x,WHITE);
putpixel(x0+x,y0-y,WHITE);
putpixel(x0-x,y0-y,WHITE);
putpixel(x0+y,y0-x,WHITE);
delay(50);
if(d<0){
d=d+2*(x+1)+1;
}
else{
d=d+2*(x-y)+5;
y=y-1;
}
x++;
}
getch();
}