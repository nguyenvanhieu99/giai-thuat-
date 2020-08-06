#include<iostream>
#include<algorithm>
//#include<bits/stdc.h>
using namespace std;
void intersection(int *a,int *b,int *f,int n,int m,int k){
	int i=0,j=0,t=0,e[n];
	while(i<n&&j<m){
		if(a[i]<b[j]){
			i++;
		}
		else if(a[i]>b[j]){
			j++;
		}
		else{
			e[t]=a[i];
			t++;j++;i++;
		}
	}
	i=0;j=0;int c=0;
	int re[t];
	while(i<t&&j<k){
		if(e[i]<f[j]){
			i++;
		}
		else if(e[i]>f[j]){
			j++;
		}
		else{
			re[c]=e[i];
			c++;j++;i++;
		}
	}
	if(c==0) cout<<"-1"<<endl;
	else{
		for(int i=0;i<c-1;i++){
			cout<<re[i]<<" ";
		}
		cout<<re[c-1]<<endl;
	}
}
int main(){
	int bo;cin>>bo;
	while(bo--){
	int n,m,k;cin>>n>>m>>k;
		int a[n],b[m],f[k];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
		}
		for(int i=0;i<k;i++){
			cin>>f[i];
		}
		intersection(a,b,f,n,m,k);
	}

	return 0;
}

