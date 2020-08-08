#include <bits/stdc++.h>

using namespace std;

int n, m;
char a[1010][1010];

void init(){
	cin >> n >> m;
	for(int i=1; i<=n; ++i)
		for(int j=1; j<=m; ++j)
			cin >> a[i][j];
}

void mark(int x, int y){
	if (x>0 && y>0 && x<=n && y<=m && a[x][y]=='1'){
		a[x][y] = '.';
		mark(x-1, y-1); mark(x-1, y); mark(x-1, y+1);
		mark(x, y-1); mark(x, y+1);
		mark(x+1, y-1); mark(x+1, y); mark(x+1, y+1);
	}
}

void solve(){
	int res=0;
	for(int i=1; i<=n; ++i)
		for(int j=1; j<=m; ++j)
			if (a[i][j]=='1'){
				++res;
				mark(i, j);
			}
	cout << res << endl;
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
