//24
#include<iostream>

using namespace std;
int m=123456789;

long long pw(long long n){
	if(n==0) return 1;
	if(n==1) return 2;
	long long x=pw(n/2);
	if(n%2==0) return x*x%m;
	return (x*x%m)*2%m;
}
int main(){
	int bo;
	cin>>bo;
	while(bo--){
		long long n,k;
		cin>>n;
		
		cout<<pw(n-1)<<endl;
	}

	return 0;
}

