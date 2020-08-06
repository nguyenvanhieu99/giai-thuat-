//tich voi ma tran chuyen vi 

#include<iostream>

using namespace std;
int ma[100][100],cv[100][100];
int re[100][100];
int n,m;
void tich(){
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			re[i][j]=0;
			for(int t=0;t<m;++t){
				re[i][j]+=ma[i][t]*cv[t][j];
			}
		}
	}
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
		cout<<re[i][j]<<" ";
	}
	cout<<"\n";
	}
}


int main(){
	int bo;
	cin>>bo;
	while(bo--){
		int tn,tm;
		cin>>tn>>tm;
		n=tn;m=tm;
		for(int i=0;i<n;++i){
			for(int j=0;j<m;++j){
				int term;
				cin>>term;
				ma[i][j]=term;
				cv[j][i]=term;
			}
		}
		tich();
		
	}

	return 0;
}

