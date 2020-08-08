#include <bits/stdc++.h>

using namespace std;

int a[1010][1010];
bool c[1010];
int n, m, mark;

void DFS(int u, int& x){
	if (mark) return;
	c[u] = false;
	for(int v=1; v<=n; ++v)
		if (a[u][v] && c[v]){
			if (v==x) mark = true;
			DFS(v, x);
		}
}


void init(){
	memset(a, 0, sizeof(a));
	cin >> n >> m;
	int x, y;
	
	for(int i=0; i<m; ++i){
		cin >> x >> y;
		a[x][y] = a[y][x] = 1;
	}
}

void reinit(){
	for(int v=1; v<=n; ++v)
		c[v] = true;
}


void solve(){
	int q, s, t;
	cin >> q;
	while (q--){
		cin >> s >> t;
		if (s==t){
			cout << "YES\n";
			continue;
		}
		
		mark = false;
		reinit();
		DFS(s, t);
		if (mark) cout << "YES\n";
		else cout << "NO\n";
	}
}



int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int t;
	cin >> t;
	
	while (t--){
		init();
		solve();
	}
}
