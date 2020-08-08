#include <bits/stdc++.h>
#include <queue>
using namespace std;

void solve(){
	int k, x;
	long long p['Z'+1]{};
	string s;
	priority_queue<long long> pq;
	
	cin >> k;
	cin.ignore();
	getline(cin, s);
	if (k>=s.length()){
		cout << 0 << "\n";
		return;
	}
	
	for(int i=0; i<s.length(); ++i)
		++p[s[i]];
	
	for(char c='A'; c<='Z'; ++c)
		if (p[c]) pq.push(p[c]);

	while (k--){
		x = pq.top();
		pq.pop();
		pq.push(x-1);
	}
	
	long long res=0;
	while (!pq.empty()){
		res += pq.top()*pq.top();
		pq.pop();
	}
	cout << res << "\n";
}


int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int t;
	
	cin >> t;
	while (t--){
		solve();
	}
	
	
	return 0;
}
