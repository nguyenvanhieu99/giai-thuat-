#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int duyet(int x,int *b,int *na,int m){
	if(x==0) return 0;
	if(x==1) return ma[0];
	int *vt=upper_bound(b,b+m,x);
	int as=(b+m)-vt;
	if(x==2) as=as-ma[3]-ma[4];
	if(x==3) as=as+ma[2];
	return as;
}
int dem(int *a,int *b,int n,int m){
	int ans=0,j=0;
	int ma[5]={0};
	while(b[j]<5){
		ma[b[j]]++;
		j++;
	}
	int tong=0;
	for(int i=0;i<n;i++){
		tong+=duyet(a[i],b,ma,m);
	}
	return tong;
	
}


int main(){
	int bo ;cin>>bo;
	while(bo--){
		int n,m;
		cin>>n>>m;
		int a[n],b[m];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
		}
		sort(b,b+m);
		cout<<dem(a,b,n,m);

	}

	return 0;
}
