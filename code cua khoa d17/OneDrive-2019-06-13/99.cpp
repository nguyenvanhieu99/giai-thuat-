#include <iostream>
#include <cstring>
#include <limits>

using namespace std;


int a[10][10];
bool c[10][10];
int x1, y1, x2, y2;
int s, best;

void init(){
	string s1, s2;
	cin >> s1 >> s2;
	x1 = s1[0]-'a'+1;
	y1 = s1[1]-'0';
	x2 = s2[0]-'a'+1;
	y2 = s2[1]-'0';
	memset(c, true, sizeof(c));
}

void mark(int x, int y){
	if (x>0 && y>0 && x<=8 && y<=8 && c[x][y]){
		
		if (s+1>best) return;
		++s;
		c[x][y] = false;
		
		if (x==x2 && y==y2)
			if (s<best) best =s;
			
		mark(x+1, y+2);
		mark(x+2, y+1);
		mark(x+2, y-1);
		mark(x+1, y-2);
		mark(x-1, y-2);
		mark(x-2, y-1);
		mark(x-2, y+1);
		mark(x-1, y+2);
			
		c[x][y] = true;
		--s;
	}
}

void solve(){
	
	if (x1==x2 && y1==y2){
		cout << 0 << "\n";
		return;
	}
	
	s = -1;
	best = INT_MAX;
//
	mark(x1, y1);
	
	cout << best << "\n";

}


int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int t;
	cin >> t;
	while (t--){
		init();
		solve();
	}
}
