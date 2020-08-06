//C n-1,n+m-2
//1->n-1
//n+m-2-n+1+1=m->n
#include<iostream>

using namespace std;
int a[200][200];
int n,m;
int main(){
	int bo;
	cin>>bo;
	while(bo--){
		cin>>n>>m;
		for(int i=1;i<=n;++i){
			for(int j=1;j<=m;++j){
				cin>>a[i][j];
			}
		}
		long long tu=1,mau=1;
		for(int i=1;i<=n-1;++i){
			mau=mau*i;
		}
		for(int i=m;i<=n+m-2;++i){
			tu=tu*i;
		}
		long long res=tu/mau;
		cout<<res<<endl;
		
	}

	return 0;
}

