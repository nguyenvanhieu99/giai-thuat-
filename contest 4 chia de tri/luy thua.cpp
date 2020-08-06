//21
#include<iostream>

using namespace std;
int m=le9+7,n,k;
long long pw(){
	if(n==0) return 1;
	long long x=pw(n,k/2);
	if(k%2==0) return x*x%m;
	return ((n*x)%m)*x%m;
}
int main(){
	int bo;
	cin>>bo;
	while(bo--){
		cin>>n>>k;
		cout<<pw()<<endl;
	}

	return 0;
}

