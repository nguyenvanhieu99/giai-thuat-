#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
#include<queue>
using namespace std;
vector<int> list[1005];
bool chuaxet[1005]={true};
void bfs(int u){
	queue<int> q;
	q.push(u);
	chuaxet[u]=false;
	while(!q.empty()){
		int v=q.front();q.pop();
		for(int i=0;i<list[v].size();i++){
			int x=list[v][i];
			if(chuaxet[x]){
				chuaxet[x]=false;
				q.push(x);
			}
		}
	}
}
bool lienthongmanh(int v){
	for(int i=1;i<=v;i++){
		memset(chuaxet,true,sizeof(chuaxet));
		bfs(i);
		for(int j=1;j<=v;j++){
			if(chuaxet[j]) return false;
		}
		
	}
	return true;
}
int main(){
	int bo;cin>>bo;
	while(bo--){
	int v,e;cin>>v>>e;
	int t1,t2;
		for(int i=0;i<e;i++){
			cin>>t1>>t2;
			list[t1].push_back(t2);
		}
	bool ok=lienthongmanh(v);
	if(ok) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	for(int i=1;i<=v;i++) list[i].clear();
	}

	return 0;
}

