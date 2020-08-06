#include<iostream>
#include<algorithm>
#include<vector >
#include<cstring>

using namespace std;
vector<int> list[1005];
vector<int> goc[1005];
bool chuaxet[1005];
void dfs(int u){
	chuaxet[u]=false;
	for(int i=0;i<list[u].size();i++){
		int v=list[u][i];
		if(chuaxet[v]){
			chuaxet[v]=false;
			dfs(v);
		}
	}
}
bool ktLienthong(int k,int v){
	for(int i=1;i<=v;i++){
		
		if(chuaxet[i]&&i!=k) return false;
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
			list[t2].push_back(t1);
		}
		for(int i=1;i<=v;i++){
			chuaxet[i]=false;
			if(i==1) dfs(2);
			else dfs(1);
			bool ok=ktLienthong(i,v);
			if(!ok) cout<<i<<" ";

			memset(chuaxet,true,sizeof(chuaxet));
		}
		cout<<endl;
	for(int i=1;i<=v;i++)	list[i].clear();
	}

	return 0;
}

