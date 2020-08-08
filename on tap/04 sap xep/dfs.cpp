bool chuaxet[1005];
vector<int> list[1005];

void dfs(int u){
	chuaxet[u]=false;
	cout<<u<<" ";
	for(int i=0;i<list[u].size();i++){
		if(chuaxet[list[u][i]]) dfs(list[u][v]);
	}
}

void bfs(u){
	queue<int>q;
	q.push(u);
	chuaxet[u]=false;
	while(!q.empty()){
		int t=q.front();q.pop();
		cout<<t<<" ";
		for(int i=0;i<list[t].size();i++){
			intt v =list[t][i];
			if(chuaxet[v]){
				q.push(v);
				chuaxet[v]=false;
			}
		}
	}
}
