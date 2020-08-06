//uoc chung lon nhat ,boi chung nho nhat 
#include<iostream>

using namespace std;
int a,b;
long long int gcd(int a,int b){
	while(a!=0){
		long  long int r=b%a;
		b=a;
		a=r;
	}
	return b;
}
int main(){
	int bo;
	cin>>bo;
	while(bo--){
		cin>>a>>b;
		long long int term=gcd(a,b);
		long long int  boi=(a*b)/term;
		cout<<term<<" "<<boi<<endl;
	}

	return 0;
}

