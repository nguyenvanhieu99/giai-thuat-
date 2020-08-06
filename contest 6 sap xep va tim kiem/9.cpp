#include<iostream>
#include<algorithm>
using namespace std;

int main(){ 

	int bo;cin>>bo;
	while(bo--){
		int n,k,dem=0;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
				
		sort(a,a+n);
		int *te=upper_bound(a,a+n,k);
		int vt=-(a-te);
		//cout<<vt<<" "<<endl;
		for(int i=0;i<=vt;i++){
			for(int j=i+1;j<=vt;j++){
				int tong=a[i]+a[j];
				if(tong==k) dem++;
			}   
		}
		cout<<dem<<endl;
	}

	return 0;
}

