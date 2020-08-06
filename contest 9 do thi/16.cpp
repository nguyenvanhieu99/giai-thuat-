#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
#include<queue>
using namespace std;
bool chuaxet[1005];
vector<int> list[1005];
void bfs(int u){
	queue<int> q;
	q.push(u);
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
int main(){
	int bo;cin>>bo;
	while(bo--){
		memset(chuaxet,true,sizeof(chuaxet));
		for(int i=0;i<1005;i++) list[i].clear();
		int v,e;cin>>v>>e;
		for(int i=0;i<e;i++){
			int t1,t2;
			cin>>t1>>t2;
			list[t1].push_back(t2);
			list[t2].push_back(t1);
		}
		int dem=0;
		for(int i=1;i<=v;i++){
			if(chuaxet[i]){
				bfs(i);
				dem++;
			}
		}
		cout<<dem<<endl;
		
	}

	return 0;
}

