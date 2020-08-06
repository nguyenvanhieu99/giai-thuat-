#include<iostream>

using namespace std;
int n,k;
int a[1000000];
int main(){
	int bo ;cin>>bo;
	while(bo--){
		cin>>n>>k;
		for(int i=0;i<n;++i){
			cin>>a[i];
		}
		int l=0,r=n-1,i=1;
		bool ok=true;
		while(l<=r&&ok){
			 i=l+(r-l)/2;
			// cout<<i<<" "<<r<<" "<<l<<endl;
			if(k==a[i]) ok=false;
			else if(k<a[i]) r=i-1;
			else l=i+1;
		}
		if(ok) cout<<"NO"<<endl;
		else cout<<i+1<<endl;
	}

	return 0;
}

