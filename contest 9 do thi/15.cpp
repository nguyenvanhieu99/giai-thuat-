#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;
bool chuaxet[1005];
vector <int> list[1005];

void dfs(int u){
	chuaxet[u]=false;
	for(int i=0;i<list[u].size();i++){
		int v=list[u][i];
		if(chuaxet[v]){
			dfs(v);
		}
	}
}
int main(){
	int bo;cin>>bo;
	while(bo--){
		memset(chuaxet,true,sizeof(chuaxet));
		for(int i=0;i<1005;i++) list[i].clear();
		int v,e;cin>>v>>e;
		for(int i=0;i<e;i++){
			int t1,t2;cin>>t1>>t2;
			list[t1].push_back(t2);
			list[t2].push_back(t1);
			 
		}
		int d=0;
		for(int i=1;i<=v;i++){
			if(chuaxet[i]){
				d++;
				dfs(i);
			}
		}
		cout<<d<<endl;
	}

	return 0;
}

