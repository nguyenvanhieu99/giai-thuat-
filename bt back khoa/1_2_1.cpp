#include<iostream>

using namespace std;

int main(){
	char n;
	cout<<"Nhap vao chu cai :";
	cin>>n;
	if(n>='a'&&n<='z') cout<<"ban vua nhap chu cai thuong";
	else if(n>='A'&&n<='Z') cout<<"ban vua nhap chu cai Hoa";
	else cout<<"KHONG PHAI KY TU";
	    

	return 0;
}

