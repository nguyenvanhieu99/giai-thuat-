#include<iostream>
#include <winbgim.h> 
#define Round(a) (int)(a+0.5)   // lam tron so
#define DELAY 10
using namespace std;
int color=15;
void lineDDA(int x1, int y1, int x2, int y2){       // thuat toan DDA
    int x_unit = 1, Dx = x2 - x1, Dy = y2 - y1;     // Khoi tao cac gia tri ban dau
    int x = x1;
    float y = y1;
    float m = (float)Dy/Dx;     // he so goc m
    putpixel(x, Round(y), color);
       
    while(x < x2){
        delay(10);  // thoi gian tre khi ve 1 diem anh
        x += x_unit;
        y += m;
        putpixel(x,Round(y), color);
    }
}
//sinh duong thang co ban 
void dline(int x1,int y1,int x2,int y2,int color){
	float y;
	int x;
	for(int x=x1;x<x2;x++){
		delay(10);
		y=y1+(x-x1)*(y2-y1)/(x2-x1);
		putpixel(x,Round(y),color);
	}
}
int main(int argc, char *argv[])
{
	 int gd,gm=VGAMAX; gd=DETECT;
    initgraph(&gd,&gm,NULL);  
	// now, you can run project
	//initwindow(300, 300);			// init window graphics
	setbkcolor(1);					// set background
   	cleardevice();
	setcolor(14);					// set text color
	outtextxy(250,20,"Graphics in Dev-C++");// print text in window graphics
	dline(50,150, 300, 200,color);
	line(50,200,300,250);
	while(!kbhit()) delay(1);		// pause screen	
	return 0;
}
