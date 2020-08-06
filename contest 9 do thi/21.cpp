//liet ke canh cau 
#include<iostream>
#include<algorithm>
#include<queue>
#include<cstring>
#include<vector>
using namespace std;
bool chuaxet[1005]={true};
vector <int> list[1005];
void dfs(int u){
	chuaxet[u]=false;
	for(int i=0;i<list[i].size();i++) {
		int v=list[u][i];
		if(chuaxet[v]){
			dfs(v);
		}
	}
}
void canhcau(int v){
	int i,j,k,u;
	for(i=1;i<=v;i++){
		for(u=0;u<list[i].size();u++){
			j=list[i][u];
			list[i].erase(list[i].begin()+u);
			int term;
			for(term=0;term<list[j].size();term++){
				if(list[j][term]==i) break;
			}
			list[j].erase(list[j].begin()+term);
			dfs(i);
			bool check=false;
			for(k=1;k<=v;k++)   if(chuaxet[k]) check=true;
			if(check&&i<j)cout<<i<<" "<<j<<endl;
			list[i].insert(list[i].begin()+u,j);
			list[j].insert(list[j].begin()+term,i);
			memset(chuaxet,true,sizeof(chuaxet));
		}
	}
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
		canhcau(v);
	}

	return 0;
}

