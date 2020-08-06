#include<bits/stdc++.h>
using namespace std;
bool ok=true;
int a[10000]={0},n,k;
void out(){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	
	cout<<" ";
}
void sinh(){
	int i=n-1;
	while(i>0&& a[i]<a[i+1]) i--;
	if(i>0){
		int j=n;
		while(a[i]<a[j]) j--;
		swap(a[i],a[j]);
		int r=i+1,l=n;
		while(r<=l){
			swap(a[r],a[l]);
			r++;l--;
		}
	}else{
		ok=false;
	}
	
}
int main(){
	int bo;cin>>bo;
	while(bo--){
		cin>>n;
		int s1=n;
		for(int i=1;i<=n;i++){
			a[i]=s1;
			s1--;
		}
		while(ok){
			out();
			sinh();
		}
		ok=true;
		cout<<endl;
	}

	return 0;
}

