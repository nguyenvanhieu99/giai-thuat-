#include<iostream>
#include<algorithm>
//#include<bits/stdc.h>
using namespace std;

int main(){
	int bo;cin>>bo;
	while(bo--){
	int n,k;cin>>n>>k;
		int a[n+k];
		for(int i=0;i<n+k;i++){
			cin>>a[i];
		}
		sort(a,a+n+k);
		for(int i=0;i<n+k-1;i++){
			cout<<a[i]<<" ";
		}
		cout<<a[n+k-1]<<endl;
	}

	return 0;
}

