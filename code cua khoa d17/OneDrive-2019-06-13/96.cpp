#include <iostream>
#include <vector>
#include <cstring>

#define MAXN 1010

using namespace std;

int n, m, mark[MAXN];
vector<int> adj[MAXN];

void init(){
	
	memset(mark, 0, sizeof(mark));
	memset(adj, 0, sizeof(adj));
	
	cin >> n >> m;
	int u, v;
	for(int i=0; i<m; ++i){
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	
	
}


int dfs(int u, int color = 1){
	mark[u] = color;
	
	int ans = 1;
	for(int v : adj[u]){
		if (!mark[v] && !dfs(v, 3-mark[u])) ans = 0;
		if (mark[v] == color) ans = 0;
	}
	return ans;
}


void solve(){
	for(int v=1; v<=n; ++v)
		if (!mark[v] && !dfs(v)){
			cout << "NO\n";
			return;
		}
	cout << "YES\n";
}




int main()
{
 	int t;  
	cin >> t;
	while (t--){
		init();
		solve();
	} 
    return 0;
}

