#include <bits/stdc++.h>


#define MAX 1010

using namespace std;
int k, n, m;
int a[MAX][MAX], b[MAX];
bool c[MAX];
vector<int> p;


void DFS(int u){
	c[u] = false;
	for(int v=1; v<=n; ++v)
		if (a[u][v] && c[v]){
			++b[v];
			DFS(v);
		}
}

void reinit(){
	for(int v=1; v<=n; ++v)
		c[v] = true;
}

void init(){
	cin >> k >> n >> m;
	int x, y;
	
	for(int i=0; i<k; ++i){
		cin >> x;
		p.push_back(x);
	}
	
	for(int i=0; i<m; ++i){
		cin >> x >> y;
		a[x][y] = 1;
	}
}


void solve(){
	int x;
	for(int i=0; i<p.size(); ++i){
		reinit();
		++b[p[i]];
		c[p[i]] = false;
		DFS(p[i]);
	}
	
	int res=0;
	for(int i=1; i<=n; ++i)
		if (b[i]==k) ++res;
	cout << res << "\n";
}


int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	init();
	solve();
	
	return 0;
}
