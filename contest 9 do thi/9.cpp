#include<iostream>
#include<algorithm>
#include<queue>
#include<cstring>
#include<vector>
using namespace std;
int chuaxet[1005];
vector <int> list[1005];
void bfs(int u){
	queue<int> q;
	q.push(u);chuaxet[u]=false;
	
	while(!q.empty()){
		int v=q.front();q.pop();
		cout<<v<<" ";
		for(int i=0;i<list[v].size();i++){
			int k=list[v][i];
			if(chuaxet[k]){
				q.push(k);
				chuaxet[k]=false;
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
			
		}
		bfs(u);
		cout<<endl;
		for(int i=0;i<1005;i++)list[i].clear();
	}
	return 0;
}

