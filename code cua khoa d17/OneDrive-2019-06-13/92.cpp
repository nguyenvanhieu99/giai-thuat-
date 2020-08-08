#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	int n;
	string s;
	int d[1010]={};
	

	cin >> n;
	cin.ignore();
	for(int i=1; i<=n; ++i){
		getline(cin, s);
		s+=' ';
		int v=0;
		for(char c:s)
			if (isdigit(c)) v=v*10 + (c-'0');
			else{
				if (v<=n && v!=i) d[v]=1;
				v = 0;
			}
		
		for(int v=1; v<=n; ++v){
			cout << d[v];
			d[v] = 0;
			if (v<n) cout << " ";
		}
		if (i<n) cout << endl;
	}


	
	return 0;
}
