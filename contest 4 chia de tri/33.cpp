//bai 33
#include<iostream>

using namespace std;
int m=1e9+7;
long long tinh(long long n,long long k){
	if(k==0) return 1;
	long long x=tinh(n,k/2);
	if(k%2==0) return x*x%m;
	return n*(x*x%m)%m;
}

long long dao(long long n){
	long long d=0;
	while(n>0){
		d=d*10+n%10;
		n/=10;
	}
	return d;
}
int main(){
	int bo;cin>>bo;
	long long n,k;
	while(bo--){
		cin>>n;
		long long r=dao(n);
		cout<<tinh(n,r)<<endl;
	}

	return 0;
}

