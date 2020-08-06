#include <iostream>
#include <string>

#define MAX 5050
using namespace std;

bool F[MAX][MAX];

void init(){
	string s;
	int res=1, len;
	
	
	getline(cin, s);
	len = s.length();
	
	for(int i=0; i<len; ++i)
		for(int j=0; j<len; ++j)
			if (i<j) F[i][j] = false;
			else F[i][j] = true;
	
			
	for(int k=1; k<s.length(); ++k)
		for(int i=0; i<s.length()-k; ++i){
			int j=i+k;
			if ((F[i][j] = F[i+1][j-1] && s[i]==s[j]) && (j-i+1>res))
				res = j-i+1;
		}
		
	cout << res << endl;
}

int main()
{
	int t;
	cin >> t;
	cin.ignore();
	while (t--){
		init();
	}
}
