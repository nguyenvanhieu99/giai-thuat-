#include<iostream>
#include<algorithm>
//#include<bits/stdc.h>
#include<vector>
using namespace std;

int main(){
	int bo;cin>>bo;
	while(bo--){
		int v,e;cin>>v>>e;
		vector<int>a[v+1];
		
		for(int i=0;i<e;i++){
			int t1,t2;
			cin>>t1>>t2;
			a[t1].push_back(t2) ;
			a[t2].push_back(t1);
		}
		for(int i=1;i<v+1;i++){
			cout<<i<<":";
			for(int j=0;j<a[i].size();j++){
				cout<<" "<<a[i][j];
			}
			cout<<endl;
		}
	}

	return 0;
}

