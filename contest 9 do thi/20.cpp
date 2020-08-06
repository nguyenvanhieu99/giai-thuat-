#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
#include<queue>

using namespace std;
vector<int> list[1005];
bool chuaxet[1005];
void bfs(int u){
	queue<int> q;
	q.push(u);
	chuaxet[u]=false;
	while(!q.empty()){
		int v=q.front();q.pop();
		for(int i=0;i<list[v].size();i++){
			int x=list[v][i];
			if(chuaxet[x]){
				q.push(x);
				chuaxet[x]=false;
			}
		}
	}
}
bool kiemTraLienThong(int v,int k){
	for(int i=1;i<=v;i++){
		if(chuaxet[i]&&i!=k) return false;
	}
	return true;
}
void lietKeDinhTru(int v){
	for(int i=1;i<=v;i++){
		chuaxet[i]=false;
		if(i==1) bfs(2);
		else bfs(1);
		bool ok=kiemTraLienThong(v,i);
		if(!ok) cout<<i<<" ";
		memset(chuaxet,true,sizeof(chuaxet));
	}
	cout<<endl;
}
int main(){
	int bo;cin>>bo;
	while(bo--){
	int v,e,t1,t2;cin>>v>>e;
		for(int i=0;i<e;i++){
			cin>>t1>>t2;
			list[t1].push_back(t2);
			list[t2].push_back(t1);
		}
		lietKeDinhTru(v);
		for(int i=1;i<=v;i++) list[i].clear() ;
	}
	

	return 0;
}

