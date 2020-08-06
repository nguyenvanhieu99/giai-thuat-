//1.2.4 tinh gia tri ham
#include<iostream>
#include<math.h>
using namespace std;

int main(){
	cout<<"nhap vao gia tri x";
	int n;cin>>n;
	cout<<"gia tri ham f(x) la:";
	if(n>=1){
		double s=sqrt(n*n+1);
		cout<<s;
	}
	else if (n>-1&&n<1)
		cout<<3*n+5;
	else if(n<=-1)	{
		cout<<(n+1)*(n+1)-2;
	}

	return 0;
}

