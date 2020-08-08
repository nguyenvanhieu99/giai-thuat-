#include <bits/stdc++.h>

#define MAX 1010
using namespace std;

int n;
bool c[MAX];

void init(){
	
	memset(c, true, sizeof(c));

	cin >> n;
	int u, v;
	bool mark=true;
	

	for(int i=1; i<=n-1; ++i){
		cin >> u >> v;
		if (mark){
			if (c[u] || c[v]) c[u]=c[v]=false;
			else mark=false;
		}
	}
	
	if (mark) cout << "YES\n";
	else cout << "NO\n";
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int t;
	cin >> t;
	while (t--){
		init();
	}
	
	return 0;
}
