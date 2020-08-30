
/*
	Name: Sothuc.cpp
	Copyright: 2020
	Author: Nguyen Van Hieu
	Description:
	IBM Clean Room// ky nghe phong sach
		.bat dau tu 1 ct rong = sach
		. 1/1 no error next
	Date: 13/08/20 14:25
	Improve,Improve and Improve again;
*/

//#include<fstream>  //doc ghi dia
#include<iostream>
//#include<algorithm>
#include<cmath>
//#include<window.h>
#include<ctime>
//#include<string>
//#include<bits/stdc++.h>
using namespace std;
/*-----------
clean Room Emtry prog,1/1

E5: five example ,
	Tau(1)=0, Tau(2)=1,Tau(3)=1
	Tau(4)=2,Tau(5)=1,Tau(12) =5

 Tau 1....n
 t[i]=Tau(i) :i=1..<n
 2000 Eratosthenes
 thay / bang *
 thay nhan bang  +
 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
 
 . coding is easiet and the last step ...
--------------*/

int t[1000001];
int Tau(int x){
	int d=1;
	int sx=int(sqrt(x));
	for(int u=2;u<=sx;u++){
		if( (x%u) ==0 ){
			d+=2;
		}
	}
	return (sx*sx == x)? d-1:d;
	
}//tau
int allTau(int n){
	for(int i=2;i<n;++i){
		t[i]=1;
		
	}
	t[0]=t[1]=0;
	int n2=n/2;
	for(int i=2;i<=n2;++i){
		for(int j=i+i;j<n;j+=i){
			t[j]++;
		}
	}
}// allTau 
int Total(int n){
	int d=0;
	for(int x=1;x<n;x++){
		d+=t[x];
	}
	return d;
}
void test(int n){
	for(int x=1;x<n;x++)	{
		cout<<x<<":"<<t[x]<<endl;
	}
} // test
int main(){
	int tm=time(NULL);
	int n=1000000;
	
	allTau(n);
	//test(25);
	cout<<"\n"<<Total(n);
	//cout<<"\n"<<difftime(time(NULL),tm);
	return 0;
}

