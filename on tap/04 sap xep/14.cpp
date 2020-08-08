#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
book prime[10000000]={true};
void nguyento(int n){
	for(int p=2;p*p<=n;p++){
		if(prime[p]){
			for(inti=p*p;i<=n;i+=p){
				prime[i]=false;
			}
		}
	}
}

int main(){
	nguyento(1e6);
	int bo ;ci>>bo;
	while(bo--){
		int n;cin>>n;
		bool ok =false;
		for(int i=0;i<n;i++){
			if(prime[i]&&prime[n-i]){
				cout<<i<<" "<<n-i<<endl;
				ok=true;
				break;
			}
		}
		if(!ok) cout<<"-1"<<endl;

	}
	return 0;
}
