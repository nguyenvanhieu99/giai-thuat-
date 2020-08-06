#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

int n, m, s, t;
int a[1010][1010];
int pre[1010];
bool c[1010];

void init(){
	cin >> n >> m >> s >> t;
	memset(a, 0, sizeof(a));
	memset(c, true, sizeof(c));
	memset(pre, 0, sizeof(pre));
	
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
	
	while (!q.empty()){
		u = q.front(); q.pop();
		for(int v=1; v<=n; ++v)
			if (a[u][v] && c[v]){
				q.push(v);
				pre[v] = u;
				c[v] = false;
			}
	}
	
}

void solve(){

	
	BFS(s);
	

	if (pre[t]==0){
		cout << "-1\n";
	} else{
		int cnt = 1;
		while (pre[t]!=s){
			++cnt;
			t = pre[t];
		}
		cout << cnt << "\n";	
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
	
	
	return 0;
}
