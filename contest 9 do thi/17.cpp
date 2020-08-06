#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>

using namespace std;
vector<int> list[1005];
bool chuaxet[1005]={true};
void dfs(int u){
	chuaxet[u]=false;
	//cout<<u<<" ";
	for(int i=0;i<list[u].size();i++){
		int v=list[u][i];
		if(chuaxet[v]){
			dfs(v);
		}
	}
}
bool lienThongmanh(int v,int e){
	for(int i=1;i<=v;i++)	{
		memset(chuaxet,true,sizeof(chuaxet));
		dfs(i);
		for(int j=1;j<=v;j++){
			if(chuaxet[j]) return false;
		}
		//cout<<endl;
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
	bool ok =lienThongmanh(v,e);
	if(ok) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	for(int i=1;i<=v;i++) list[i].clear();
	}

	return 0;
}

