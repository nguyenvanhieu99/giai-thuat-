#include<iostream>
#include<algorithm>
//#include<bits/stdc.h>
using namespace std;

int main(){
	int bo;cin>>bo;
	while(bo--){
	int n,m;cin>>n>>m;
		long long  a[n],b[m],min,max;
		cin>>a[0];max=a[0];
		for(int i=1;i<n;i++){
			
			cin>>a[i];
			if(max<a[i])max=a[i];
		}
		cin>>b[0];min=b[0];
		for(int i=1;i<m;i++){
			
			cin>>b[i];
			if(min>b[i]) min=b[i];
		}
		long long k=max*min;
		cout<<k<<endl;
		
		
	}

	return 0;
}

