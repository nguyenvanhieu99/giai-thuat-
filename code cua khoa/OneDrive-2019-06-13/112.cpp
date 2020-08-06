#include <iostream>

#define MAXW 1000111

using namespace std;
int w[110][110];
int n, m;


void init(){
	cin >> n >> m;
	for(int u=1; u<=n; ++u)
		for(int v=1; v<=n; ++v)
			if (u==v) w[u][v] = 0;
			else w[u][v] = MAXW;
	
	int u, v, weight;
	for(int i=0; i<m; ++i){
		cin >> u >> v >> weight;
		w[u][v] = w[v][u] = weight;
	}
}

void Floyd(){
	for(int k=1; k<=n; ++k)
		for(int u=1; u<=n; ++u)
			if (w[u][k]<MAXW)
				for(int v=1; v<=n; ++v)
					if (w[k][v]<MAXW && w[u][v]>w[u][k]+w[k][v])
						w[u][v] = w[u][k]+w[k][v];
					
}


void solve(){
	int t, s, d;
	cin >> t;
	
	Floyd();
	while (t--){
		cin >> s >> d;
		cout << w[s][d] << "\n";
	}
	
}



int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	init();
	solve();
	
	return 0;
}


