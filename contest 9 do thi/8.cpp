#include<iostream>
#include<algorithm>
//#include<bits/stdc.h>
#include<vector>
#include<cstring>
#include<queue>
using namespace std;
bool chuaxet[1005];
vector<int> list[1005];
void bfs(int u){
	queue<int> q;
	q.push(u);
	chuaxet[u]=false;
	while(!q.empty()){
		int t=q.front();q.pop();
		cout<<t<<" ";
		for(int i=0;i<list[t].size();i++){
			int v=list[t][i];
			if(chuaxet[v]){
				q.push(v);
				chuaxet[v]=false;
			}	
		}
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
		bfs(u);
		cout<<endl;
		for(int i=0;i<1005;i++)list[i].clear();
	}

	return 0;
}

