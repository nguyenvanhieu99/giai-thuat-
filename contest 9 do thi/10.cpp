#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<cstring>

using namespace std;
bool chuaxet[1005];
int truoc[1005];
vector<int> list[1005];
void dfs(int u){
	chuaxet[u]=false;
	for(int i=0;i<list[u].size();i++){
		int v=list[u][i];
		if(chuaxet[v]  ){
			truoc[v]=u;
			dfs(v);
		}
	}
}
void tinh(int u,int g){
	stack<int> a;
	a.push(g);
	if(truoc[g]==-1) cout<<"-1"<<endl;
	else{
	int term;
	while(a.top()!=u){
		term=a.top();
		a.push(truoc[term]);
	}
	while(!a.empty()){
		cout<<a.top()<<" ";
		a.pop();
	}
	cout<<endl;
 	}
}
int main(){
	int bo;cin>>bo;
	while(bo--){
		memset(chuaxet,true,sizeof(chuaxet));
		memset(truoc,-1,sizeof(truoc));
		int v,e,u,g;cin>>v>>e>>u>>g;
		int t1,t2;
		for(int i=0;i<e;i++){
			cin>>t1>>t2;
			list[t1].push_back(t2);
			list[t2].push_back(t1);
		}
		dfs(u);
		tinh(u,g);
		for(int i=0;i<1005;i++) list[i].clear();
	}

	return 0;
}

