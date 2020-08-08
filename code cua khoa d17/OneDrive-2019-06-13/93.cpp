#include <bits/stdc++.h>


using namespace std;

int n, m;
char a[111][111];

void init(){
	cin >> n >> m;
	for(int i=1; i<=n; ++i)
		for(int j=1; j<=m; ++j)
			cin >> a[i][j];
}

void mark(int x, int y){
	if (x>0 && y>0 && x<=n && y<=m && a[x][y]=='W'){
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
			if (a[i][j]=='W'){
				++res;
				mark(i, j);
			}
	cout << res;
}


int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	init();
	solve();
	return 0;
}
