#include <iostream>
#include <cstring>
#include <string>
#include <queue>
#include <cmath>
#include <ctime>

#define INF 1000111000
#define MAXN 500

using std::cin;
using std::cout;
using std::string;
using std::queue;

bool c[21212];

int cal(int s, int t){
		
	queue<int> q, q2, emp;
	int x, res=0;
	
	if (s==t) return 0;
	if (s>t) return s-t;
	
	if (t%2==0){
		if (s==t/2) return 1;
		else if (s>t/2) return s-t/2+1;
	}
	

	q.push(s); c[s] = false;
	while (!q.empty()){
		x = q.front(); q.pop();
		
		if (x==t) break;
		
		if (x<t && c[x*2]){c[x*2] = false; q2.push(x*2);}
		if (x-1>0 && c[x-1]) {c[x-1] = false; q2.push(x-1);}
		
		if (q.empty()){
			++res;
			q = q2;
			q2 = emp;
		}
	}
	
	return res;
}

void solve(){
	int s, t;

	memset(c, true, sizeof(c));
	cin >> s >> t;
	cout << cal(s, t) << "\n";
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
