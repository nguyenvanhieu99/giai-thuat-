#include <iostream>
#include <string>
#include <stack>
#include <algorithm>

#define MAX 100011
using namespace std;

void init(){
	int C[MAX]{}, D[MAX]{};
	stack<int> s;
	string str;

	getline(cin, str);
	if (str.length()==0){
		cout << 1 << endl;
		return;
	}
	
	for(int i=0; i<str.length(); ++i)
		if (str[i]=='(') s.push(i);
		else{
			if (s.empty()) C[i] = D[i] = -1;
			else{
				D[i] = s.top();
				s.pop();
				if (str[D[i]-1]==')' && C[D[i]-1]!=-1)
					C[i] = C[D[i]-1];
				else C[i] = D[i];
			}
		}
	
	int res=0;
	for(int i=0; i<str.length(); ++i)
		if (str[i]==')' && D[i]!=-1 && (C[i]=i-C[i]+1)>res)
			res = C[i];
			
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
	
	return 0;
}
