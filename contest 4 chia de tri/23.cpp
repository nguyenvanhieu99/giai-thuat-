#include<iostream>
#include<cmath>
using namespace std;

int out(int n,long long k){
	if(k%2) return 1;
	long long x=pow(2,n-1);
	if(k==x) return n;
	if(k<x) return out(n-1,k);
	return out(n-1,k-x);
}
int main(){
	int bo;cin>>bo;
	int n;
    long long k;
	while(bo--){
		cin>>n>>k;
		cout<<out(n,k)<<endl;
	}

	return 0;
}

