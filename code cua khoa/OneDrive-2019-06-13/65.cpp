#include <bits/stdc++.h>

#define MAX 100011

using namespace std;

	
long long H[MAX], L[MAX], R[MAX];
long long res;
int n;


void solve()
{
	cin >> n;
	
	res = 0;
	H[0] = H[n+1] = -1;
	
	for(int i=1; i<=n; ++i){
		cin >> H[i];
		L[i] = i;
		while (H[L[i]-1] >= H[i]) L[i] = L[L[i]-1];
	}
	
	for(int i=n; i>0; --i){
		R[i] = i;
		while (H[R[i]+1] >= H[i]) R[i] = R[R[i]+1];
	}

	for(int i=1; i<=n; ++i)
		res = max(res, H[i]*(R[i]-L[i]+1));
	
	cout << res << "\n";
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
