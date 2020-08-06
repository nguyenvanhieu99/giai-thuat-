#include<bits/stdc++.h>
using namespace std;
int a[1000];
int b[1000];
bool ok=true;
bool chuaxet[1000];
int cuoi[1000];
int n,k;
void sinh(){
	int i=k;
	while(i>0&&a[i]==n-k+i)	i--;
	if(i>0){
		a[i]=a[i]+1;
		int j=i+1;
		while(j<=k){
			a[j]=a[j-1]+1;
			j++;
		}
	}else ok =false;
}
void dem(){
	int dem=0;
	if(!ok) cout<<k<<endl;
	else{
		for(int i=1;i<=k;i++){
			if(chuaxet[a[i]]) dem++;
		}
		cout<<dem<<endl;
	}
}
int main(){
	int bo;cin>>bo;
	while(bo--){
		cin>>n>>k;
		memset(chuaxet,true,sizeof(chuaxet));
		for(int i=1;i<=k;i++){
			cin>>a[i];
			b[i]=a[i];
			chuaxet[a[i]]=false;
		}
		sinh();
		dem();
		ok=true;
	}

	return 0;
}

