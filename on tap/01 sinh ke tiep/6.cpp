#include<bits/stdc++.h>
using namespace std;
bool ok =true;
int n;
int a[1000]={0};
void out(){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<" ";
}

void sinh(){
	int i=n-1;
	while(i>0 && a[i]>a[i+1]) i--;
	if(i>0){
		int j=n;
		while(a[i]>a[j]) j--;
		swap(a[i],a[j]);
		int r=i+1,s=n;
		while(r<s){
			swap(a[r],a[s]);
			r++;s--;
		}
		
	}else {
		ok=false;
	}
}
int main(){
	int bo;cin>>bo;
	while(bo--){
		cin>>n;
		for(int i=1;i<=n;i++){
			a[i]=i;
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

