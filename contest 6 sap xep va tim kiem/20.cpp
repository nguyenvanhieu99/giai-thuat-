#include<iostream>
#include<algorithm>
//#include<bits/stdc.h>
using namespace std;
// 1 2 4 10
//1 2 3 4 5 6 6 8 9 
//0 2 3 4 5 6 7 8 9 
int main(){
	int bo;cin>>bo;
	while(bo--){
	long long n,k;cin>>n>>k;
	long long  dem=0;
		long long  a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i=0;i<n;i++){
			//cout<<"**"<<i<<"**"<<endl;
			int vt=lower_bound(a+i,a+n,a[i]+k)-a;
			//cout<<vt;
			if(vt==n){ 	
				dem=dem+n-i-1;
			}
			else {
				//cout<<a[i]<<" "<<a[vt]<<" "<<vt<<endl;
			    dem=dem+vt-i-1;	
			}	
		}
		cout<<dem<<endl;
	}

	return 0;
}

