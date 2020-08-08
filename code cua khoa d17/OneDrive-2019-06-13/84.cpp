#include <iostream>
#include <cstring>
#include <string>
#include <cmath>

#define INF 1000111000
#define MAXN 500

using std::cin;
using std::cout;
using std::string;

string res[MAXN+1];

string itob(int n){
	string s = "";
	while (n){
		s = char(n%2+'0') + s;
		n/=2;
	}
	
	return s;
}

void init(){
	for(int i=1; i<=MAXN; ++i)
		res[i] = itob(i);
}

void solve(){
	int n;
	cin >> n;
	for(int i=1; i<=n; ++i)
		cout << res[i] << " ";
	cout << "\n";
}


int main()
{
	std::ios_base::sync_with_stdio(false); cin.tie(0);
	
	init();
	int t;
	cin >> t;
	while (t--)
		solve();
	
	return 0;
}
