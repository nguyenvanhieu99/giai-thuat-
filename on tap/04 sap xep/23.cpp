#include<iostream>
#include<algorithm>
//#include<bits/stdc.h>
using namespace std;

int main(){
        int bo;cin>>bo;
        while(bo--){
        	long long n,k;cin>>n;
		long long a[n+1],term=n;
		bool ok=true;
		for(inr i=1;i<=n-1;i++){
			cin>>a[i];
			if(a[i]!=i&& ok=true){
				term=i;
				ok=false;
			}
		}
		cout<<term<<endl;
			
	}
	return 0;
}
	
