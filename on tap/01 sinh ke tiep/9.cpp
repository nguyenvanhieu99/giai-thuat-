
#include<bits/stdc++.h>
using namespace std;
bool ok= true;
int a[1000],b[1000];
int n,k;
void out(){
	for(int i=1;i<=n;i++){
		cout<<b[i];
	}
	cout<<" ";
}
void sinh(){
	int i=n;
	while(i>0&& a[i]==1){
		a[i]=0;
		i--;
	}
	if(i>0) {
		a[i]=1;
	}else {
		ok=false;
	}
	b[1]=a[1];
	for(int j=2;j<=n;j++){
		b[j]=a[j]^a[j-1];
	}
	
}
int main(){
	int bo;cin>>bo;
	while(bo--){
		cin>>n;
		while(ok){
			out();
			sinh();
		}
		cout<<endl;
		ok= true;
		memset(a,0,sizeof(a));
	}

	return 0;
}

