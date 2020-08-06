#include<iostream>

using namespace std;
int t,n,k,x[40],c[50],dem=0;
int res[30];
bool ok =true;
void next(){
	int i=k;
	while(i>0&&x[i]==n-k+i) i--;
	if(i>0){
		x[i]=x[i]+1;
		if(c[x[i]]==1) dem++;
		for(int j=i+1;j<=k;++j){
			x[j]=x[i]-i+j;
			if(c[x[j]]==1) dem++;
		}
	}else ok=false;
}

int main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0;i<50;++i){
			c[i]=0;
		}
		for(int i=1;i<=k;++i){
			int term;
			cin>>term;
			x[i]=term;
			c[term]++;
			
		}
		next();
			for(int i=1;i<=k;++i){
			cout<<x[i];}
		if(ok==false){
			cout<<k;
			ok=true;
		}
		else cout<<dem;
	}

	return 0;
}

