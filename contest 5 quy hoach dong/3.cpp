#include<iostream>

using namespace std;

int main(){
	int bo;cin>>bo;
	while(bo--){
		int n,s;cin>>n>>s;
		int a[n];
		int l[40000]={0};//co cach nao bieu dien day con co tong bang i hay khong
		for(int i=0;i<n;++i){
			cin>>a[i];
		}
		for(int i=0;i<n;++i){
			l[a[i]]=1;
			for(int j=s;j>=a[i];--j){
				if(l[j-a[i]]==1) l[j]=1;
			}
		}
		if(l[s]==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		
	}

	return 0;
}

