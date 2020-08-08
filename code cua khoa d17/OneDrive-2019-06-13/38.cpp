#include <bits/stdc++.h>


#define MAX 1010
using namespace std;

int M[MAX][MAX], f[MAX][MAX];

int min(int a, int b, int c){
	return min(min(a, b),c);
}

void sovle(){
	int n, m, x;
	int res=0;
	
	
	cin >> n >> m;
	
	for(int i=1; i<=n; ++i)
		for(int j=1; j<=m; ++j){
			
			cin >> M[i][j];
			
			if (M[i][j]){
				f[i][j] = 1;
				if(M[i][j]==M[i-1][j-1] && M[i][j]==M[i-1][j] && M[i][j]==M[i][j-1])
					f[i][j] = min(f[i-1][j-1], f[i-1][j], f[i][j-1]) + 1;
			} else f[i][j] = 0;

			if (f[i][j]>res) res=f[i][j];
		}
	
	cout << res << "\n";
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	
	int t;
	
	cin >> t;
	while (t--)
		sovle();
	
}
