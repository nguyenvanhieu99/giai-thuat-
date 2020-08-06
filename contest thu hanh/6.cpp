//#include<iostream>
//#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int bo;cin>>bo;
	while(bo--){
	int n,k;cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int f[n];
	//	memset(f,0,n);
	for(int i=0;i<n;i++){
		f[i]=1;
	}
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]<a[j]) f[j]=max(f[i]+1,f[j]);
			}
			
		}
		int term=0;
		for(int i=0;i<n;i++){
			//cout<<f[i]<<endl;
			if(f[i]>term) term=f[i];
		}
		cout<<n-term<<endl;
	}

	return 0;
}

