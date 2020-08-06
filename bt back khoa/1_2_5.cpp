#include<iostream>

using namespace std;

int main(){
	int x,y;
	int a,b,c,d,e,f,D,dx,dy;
	cout<<"phuong trinh co dang :"<<endl;
	cout<<"ax+by=c"<<endl;
	cout<<"dx+ey=f"<<endl;
	cout<<"nhap vao lan luoi a b c d e f >0:"<<endl;
	cin>>a>>b>>c>>d>>e>>f;
	D = a * e - d * b;
    dx = c * e - f * b;
    dy = a * f - d * c;
    if (D == 0) {
        if (dx + dy == 0)
            cout<<"He phuong trinh co vo so nghiem";
        else
            cout<<"He phuong trinh vo nghiem";
    }
    else {
        x = dx / D;
        y = dy / D;
        cout<<"Phuong trinh co 2 nghiem x="<<x<<",y="<<y;
    }

	return 0;
}

