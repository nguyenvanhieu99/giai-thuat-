#include<iostream>
#include<algorithm>
//#include<bits/stdc.h>
using namespace std;

int main(){
	int bo;cin>>bo;
	while(bo--){
	int n,k;cin>>n>>k;
		int a[n];
		int term=-1;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]==k) term=i;
		}
		cout<<term+1<<endl;
	}

	return 0;
}

