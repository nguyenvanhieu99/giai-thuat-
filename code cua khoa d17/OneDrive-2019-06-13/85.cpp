#include <iostream>
#include <cstring>
#include <string>
#include <queue>
#include <cmath>

#define INF 1000111000
#define MAXN 500

using std::cin;
using std::cout;
using std::string;
using std::queue;


long long cal(int n){
	if (n==9) return 9;
	long long x = 9;
	queue<long long> q;
	q.push(x);
	
	while (1){
		x = q.front(); q.pop();
		if (x%n==0) return x;
		q.push(x*10);
		q.push(x*10+9);
	}
	
}

void solve(){
	int n;
	cin >> n;
	cout << cal(n) << "\n";
}


int main()
{
	std::ios_base::sync_with_stdio(false); cin.tie(0);
	

	int t;
	cin >> t;
	while (t--)
		solve();
	
	return 0;
}
