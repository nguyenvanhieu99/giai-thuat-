#include<bits/stdc++.h>
using namespace std;
bool ok=true;
int n;
int a[10000]={0};
void out(){
	for(int i=1;i<=n;i++){
		if(a[i]==0){
			cout<<"A";
		}
		else cout<<"B";
	}
	cout<<" ";
}
void sinh(){
	int i=n;
	while(i>0&& a[i]==1){
		a[i]=0;
		i--;
	}
	if(i>0) a[i]=1;
	else  ok =false;
	
}

int main(){
	int bo;cin>>bo;
	while(bo--){
		cin>>n;
		memset(a,0,sizeof(a));
		while(ok)
		{
			out();
			sinh();
		}
		cout<<endl;
		ok =true;
	}
	return 0;
}

