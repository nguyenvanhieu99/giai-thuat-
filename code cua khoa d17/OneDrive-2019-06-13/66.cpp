#include <bits/stdc++.h>

#define MAX 1010

using namespace std;

int a[MAX][MAX];	
int H[MAX], L[MAX], R[MAX];

int n, m, res;
void solve()
{
	memset(H, 0, sizeof(H));
	
	cin >> n >> m;
	res = 0;
	
	H[0] = H[m+1] = -1;
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=m; ++j){
			cin >> a[i][j];
			H[j] = a[i][j] * (H[j]+1);
		}
		
		for(int j=1; j<=m; ++j){
			L[j] = j;
			while (H[L[j]-1] >= H[j]) L[j] = L[L[j]-1];
		}
		
		for(int j=m; j>0; --j){
			R[j] = j;
			while (H[R[j]+1] >= H[j]) R[j] = R[R[j]+1];
		}
		
		for(int j=1; j<=m; ++j)
			res = max(res, H[j]*(R[j]-L[j]+1));
	}
	
	cout << res << endl;
}


int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	
	int t;
	
	cin >> t;
	
	while (t--)
		solve();
	
	return 0;
}
