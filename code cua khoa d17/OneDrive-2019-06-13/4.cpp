#include <iostream>
#include <string>

using namespace std;

string s;

string next(string& s){
	int p1=s.length()-2;
	
	while (p1>0 && s[p1]>=s[p1+1]) --p1;
	if (p1==0) return "BIGGEST";
	else{
		int p2=s.length()-1;
		while (s[p2]<=s[p1]) --p2;
	
		char c;
		c = s[p1];
		s[p1] = s[p2];
		s[p2] = c;
		
		for(int i=p1+1, j=s.length()-1; i<j; ++i, --j)
			c = s[i], s[i] = s[j], s[j] = c;
		return s;
	}
}


int main()
{
	int t, x;
	cin >> t;
	while (t--){
		cin >> x >> s;
		cout << x << " " << next(s) << endl;
	}

	return 0;
}
