#include<vector>
#include<bits/stdc++.h>
//#include<iostream>
//#include<algorithm>
//#include<queue>
//#include<cstring>
//#include<stack>

using namespace std;
bool chuaxet[1005];
int truoc[1005];
vector<int> list1[1005];
void bfs(int u){
	queue<int> q;
	q.push(u);
	chuaxet[u]=false;
	while(!q.empty()){
		int t=q.front();q.pop();
		//cout<<t<<" ";
		for(int i=0;i<list1[t].size();i++){
			int v=list1[t][i];
			if(chuaxet[v]){
				truoc[v]=t;
				q.push(v);
				chuaxet[v]=false;
			}
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
			list1[t1].push_back(t2);
		}
		bfs(u);
		tinh(u,g);
		for(int i=0;i<1005;i++) list1[i].clear();
	}

	return 0;
}

