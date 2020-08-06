#include<bits/stdc++.h>
using namespace std;
bool ok =true;
int a[1000]={0},n,k,b[100][200]={0};
int dem=0;
void out(){
	cout<<dem<<endl;
	for(int i=0;i<dem;i++){
		for(int j=1;j<=n;j++){
			if(b[i][j]==0) cout<<"A";
		else cout<<"B";
		}
		cout<<endl;
	}
}
void sinh(){
	int i=n;
	while(i>0 && a[i]==1) {
		a[i]=0;
		i--;
	}
	if(i>0) a[i]=1;
	else ok= false;
}
bool check(){
	int term=0;
	int res=0;
	int so=0;
	for(int i=1;i<=n;i++){
		
		if(a[i]==0){
			term++;
		}
		if(a[i]==1 || i==n){
			if(term==k) so++;
			res=max(res,term);
			term=0;
		}
	}
	if(res==k && so==1){
		for(int i=1;i<=n;i++){
			b[dem][i]=a[i];
		}
		return true;
	}
	else return false;
}
int main(){
	cin>>n>>k;
	while(ok){
		if(check()){
			dem++;
		}
		sinh();	
	}
	out();

	return 0;
}

