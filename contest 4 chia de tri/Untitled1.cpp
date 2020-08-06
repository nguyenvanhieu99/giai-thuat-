#include<iostream >

using namespace std;
int n,k;
int m=1e9+7;
long long  luythua(int n,int k){
	if(k==0 ) return 1;
	long long t=luythua(n,k/2);
	if(k%2)  return n*(t*t%m)%m;
	else return t*t%m;
}	
int main(){
	int bo ;
	cin>>bo;
	while(bo--){
		cin>>n>>k;
		cout<<luythua(n,k)<<endl;
	}
		
	
	return 0;
}

