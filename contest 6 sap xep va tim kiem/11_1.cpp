#include<iostream>
#include<algorithm>
//#include<bits/stdc.h>
using namespace std;

int main(){
	int bo;cin>>bo;
	while(bo--){
	int n,k;cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int min=a[0]+a[1];
		for(int i=0;i<n;i++){
			
			for(int j=i+1;j<n;j++){
				int term=a[i]+a[j];
				if(abs(term)<abs(min)) min =term;
			}
		}
		cout<<min<<endl;
	}

	return 0;
}

