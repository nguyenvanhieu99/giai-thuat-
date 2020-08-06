#include<iostream>
#include<algorithm>
//#include<bits/stdc.h>
#include<vector >
#include<cstring>
using namespace std;
int m,n,u;
bool chuaxet[1005];
vector<int> list[1005];
void dfs(int u){
	chuaxet[u]=false;
	cout<<u<<" ";
	for(int i=0;i<list[u].size();i++){
		int v=list[u][i];
		if(chuaxet[v]) dfs(v);
	}
}
int main(){
	int bo;cin>>bo;
	while(bo--){
		memset(chuaxet,true,sizeof(chuaxet));
	int v,e,u;cin>>v>>e>>u;
		int t1,t2;
		for(int i=0;i<e;i++){
			cin>>t1>>t2;
			list[t1].push_back(t2);
			list[t2].push_back(t1); 
		}
		dfs(u);
		cout<<endl;
		for(int i=0;i<1005;i++)list[i].clear();
	}

	return 0;
}

