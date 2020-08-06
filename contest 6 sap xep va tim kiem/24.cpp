#include<iostream>
#include<algorithm>
//#include<bits/stdc.h>
using namespace std;
void out(int *a,int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int bo;cin>>bo;
	while(bo--){
	int n,k;cin>>n>>k;
		int a[n];
		int b[n];
		int i=0;
		cin>>a[i];
		for(i=1;i<n;i++){
			int term;cin>>term;
			if(term<a[i-1]){
				b[0]=term;
				break;
			}
			a[i]=term;
			
		}
		int m=n-i;
		for(int j=1;j<m;j++){
			cin>>b[j];
		}
		out(a,i);
		out(b,m);
		int vt= lower_bound(a,a+i,k);
		cout<<vt<<" "<<a[vt]<<endl;
		int vt2= lower_bound(b,b+m,k);
		cout<<vt<<" "<<b[vt2]<<endl;
		if(vt==i&&vt2==m){
			cout<<"-1"<<endl;
		}
		else if(vt!=i)  cout<<vt<<endl;
		else if(vt2!=m)	cout<<vt2<<endl;
		
		
	}

	return 0;
}

