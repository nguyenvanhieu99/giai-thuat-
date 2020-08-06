#include<iostream>

using namespace std;

long long F[100];
char fibo(int n,long long k){
	if(n==1) return 'A';
	if(n==2) return 'B';
	if(k<=F[n-2]) return fibo(n-2,k);
	return fibo(n-1,k-F[n-2]);
}
int main(){
	int n;
	long long  k;
	int bo;cin>>bo;
	
	F[1]=1;F[2]=1;
	for(int i=3;i<=92;i++) F[i]=F[i-1]+F[i-2];
	while(bo--){
		
		cin>>n>>k;
		cout<<fibo(n,k)<<endl;
	}
	return 0;
}

