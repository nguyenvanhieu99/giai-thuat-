
#include<bits/stdc++.h>
using namespace std;
bool ok=true;
int a[1000]={0};
int n,k;
void out(){
	for(int i=1;i<=k;i++){
		cout<<a[i];
	}
	cout<<" ";
}
void sinh(){
	int i=k;
	int re[k];
	int term=1;
	for(int s=n-k+1;s<=n;s++){
		re[term]=s;
		term++;
	}
	while(i>0 && a[i]==re[i]) i--;
	if(i>0){
		a[i]++;
		int j=i+1;
		while(j<=k){
			a[j]=a[j-1]+1;
			j++;
		}
	}else{
		ok =false;
	}
}
int main(){
	int bo;cin>>bo;
	while(bo--){
	cin>>n>>k;
	for(int i=1;i<=k;i++){
		a[i]=i;
	}
	while(ok){
		out();
		sinh();
	}
	ok =true;
	cout<<endl;
	}

	return 0;
}

