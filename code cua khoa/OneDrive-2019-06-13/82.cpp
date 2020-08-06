#include <iostream>
#include <cstring>
#include <string>
#include <cmath>

#define INF 1000111000

using std::cin;
using std::cout;
using std::string;

string s, x;
long long res;

void backTrack(){
	for(char j='0'; j<='1'; ++j){
		x += j;
		
		if (x.length()==s.length()){
			if (x<=s) ++res;
		} else if (x<s) backTrack();
		
		x.erase(x.length()-1, 1);
	}
}

long long cal(){
	
	cin >> s;
	int len = s.length();
	
	if (len==1) return 1;
	
	res = 0;
	for(int i=0; i<=len-2; ++i)
		res += pow(2, i);
	
	x = "1";
	backTrack();
	return res;
}

void solve(){
	cout << cal() << "\n";
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
