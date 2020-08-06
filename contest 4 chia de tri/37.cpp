//Bai 37:
#include<iostream>

using namespace std;
long long  a[100000]={0};
int main(){
	int bo;cin>>bo;
	int n,k;
	
	while(bo--){
		cin>>n>>k;
		long long res=-1;
		for(int i=0;i<n;++i){
			long long term;
			cin>>term;
			a[i]=term;
			
			if(a[i]<=k){
				res =i;
			} 
		}
		cout<<res+1<<endl;
	}

	return 0;
}

