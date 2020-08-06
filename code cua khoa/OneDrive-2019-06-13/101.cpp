#include <iostream>
#include <cstring>


#define MAX 1010
using namespace std;

int a[MAX][MAX];
bool c[MAX];
int n, m, u;

void init(){
	cin >> n >> m >> u;
	memset(a, 0, sizeof(a));
	memset(c, true, sizeof(c));
	
	int x, y;
	for(int i=0; i<m; ++i){
		cin >> x >> y;
		a[x][y] = a[y][x] = 1;
	}
}

void DFS(int u){
	c[u] = false;
	cout << u << " ";
	for(int v=1; v<=n; ++v)
		if (a[u][v] && c[v])
			DFS(v);
}

void solve(){
	DFS(u);
	cout << "\n";
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
	return 0;
}
