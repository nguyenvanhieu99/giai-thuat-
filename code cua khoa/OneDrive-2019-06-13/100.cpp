#include <iostream>
#include <cstring>
#include <queue>

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

void BFS(int u){
	queue<int> q;
	q.push(u);
	c[u] = false;
	cout << u << " ";

	while (!q.empty()){
		u = q.front();
		q.pop();
		for(int v=1; v<=n; ++v)
			if (a[u][v] && c[v]){
				c[v] = false;
				cout << v << " ";
				q.push(v);
			}
	}
}

void solve(){
	BFS(u);
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
