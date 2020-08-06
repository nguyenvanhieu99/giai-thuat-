//1.2.4 tinh gia tri ham
#include<iostream>
#include<math.h>
using namespace std;

int main(){
	cout<<"nhap vao gia tri x";
	int n;cin>>n;
	cout<<"gia tri ham f(x) la:";
	if(n>0){
		double s=sqrt(n);
		cout<<3*n+s;
	}
	else {
		float term=1.6;
		for(int i=0;i<n;++i){
			term=term*1.6;
		}
		cout<<term+4;
	}

	return 0;
}

