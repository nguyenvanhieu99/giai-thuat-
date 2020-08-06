#include <iostream>
#include <vector>

using namespace std;
const int Mod = 1000000007;

int n, k;
void solve() {
	vector<int> dp(n, 0);
	int sum = 0;
	for (int i=0; i<n; i++) {
		dp[i] = (sum + (i < k)) % Mod;
		sum = (sum + dp[i]) % Mod;
		if (i >= k) sum = (sum + Mod - dp[i-k]) % Mod;
	}
	cout << dp[n-1] << endl;
	
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;

	while (t--){
		cin >> n >> k;
		solve();
	}
}
