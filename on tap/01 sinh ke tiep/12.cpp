
#include<bits/stdc++.h>
using namespace std;
bool ok=true;
int n,k,a[1000]={0};
void out(){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<endl;
}
bool  dem(){
	int tong=0;
	for(int i=1;i<=n;i++){
		tong+=a[i];
	}
	if(tong==k) return true;
	return false;
}
void sinh(){
	int i=n;
	while(i>0 && a[i]==1){
		a[i]=0;
		i--;
	}
	if(i>0) a[i]=1;
	else ok=false;
}
int main(){
	int bo;cin>>bo;
	while(bo--){
		cin>>n>>k;
		while(ok){
			if(dem()) out();
			sinh();
		}
		ok=true;
		//memset(a,0,sizeof(a));
	}

	return 0;
}

