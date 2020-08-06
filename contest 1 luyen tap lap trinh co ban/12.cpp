#include<iostream>

using namespace std;
int ma[100],na[100],res[200];
int n,m,k;
void chen(){
	for(int i=0;i<k;++i){
		res[i]=ma[i];
	}
	for(int i=0;i<m;++i){
		res[i+k]=na[i];
	}
	for(int i=k;i<n;i++){
		res[m+i]=ma[i];
	}
}
void out(){
	cout<<"Test 1:"<<endl;
	for(int i=0;i<(m+n);i++){
		cout<<res[i]<<" ";
	}
}
int main(){
	int bo;cin>>bo;
	while(bo--){
		
		cin>>n>>m>>k;
		for(int i=0;i<n;++i){
			cin>>ma[i];
		}
		for(int i=0;i<m;++i){
			cin>>na[i];
		}
		chen() ;
		out() ;
	}

	return 0;
}


