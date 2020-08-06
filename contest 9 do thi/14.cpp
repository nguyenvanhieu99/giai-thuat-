#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;
bool chuaxet[1005]={true};
//int truoc[1005]={-1};
vector <int> list[1005];
void dfs(int u){
	chuaxet[u]=false;
	for(int i=0;i<list[u].size();i++){
		int v=list[u][i];
		if(chuaxet[v]){
		//	truoc[v]=u;
			dfs(v);
		}
	}
}
int main(){
	int bo;cin>>bo;
	while(bo--){
		memset(chuaxet,true,sizeof(chuaxet));
		int e,v;cin>>v>>e;
		int t1,t2;
		for(int i=0;i<e;i++){
			cin>>t1>>t2;
			list[t1].push_back(t2);
			list[t2].push_back(t1);
		}
		int q;cin>>q;
		while(q--){
			memset(chuaxet,true,sizeof(chuaxet));
			int u,g;cin>>u>>g;
			dfs(u);
			if(chuaxet[g]) cout<<"NO"<<endl;
			else cout<<"YES"<<endl;
			
		}
	
		for(int i=0;i<1005;i++) list[i].clear();
	}

	return 0;
}

