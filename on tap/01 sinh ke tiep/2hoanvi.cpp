#include<bits/stdc++.h>
using namespace std;
void hoanvi(int *a,int n){
	int i=n-2;
	while(i>=0&&a[i]>a[i+1]) i--;
	if(i>=0){
		int j=n-1;
		while(a[i]>a[j]) j--;
		swap(a[i],a[j]);
		int r=i+1,s=n-1;
		while(r<=s){
			swap(a[r],a[s]);
			r++;s--;
		}
	}else{
		for(int i=0;i<n;i++){
			a[i]=i+1;
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int bo;cin>>bo;
	while(bo--){
	int n,k;cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		hoanvi(a,n);
	}

	return 0;
}

