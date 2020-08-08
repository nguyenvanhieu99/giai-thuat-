#include <iostream>
#include <stack>
#include <string>

using namespace std;

void process(string &str){
	char c;
	int cnt=0;
	bool mark=true;
	stack<char> s;
	
	
	for(int i=0; i<str.length(); ++i){
		c = str[i];
		if (c=='(') s.push(c);
		else if (s.empty() || s.top()!='('){
				++cnt;
				s.push('(');
		} else s.pop();
	}
	
	cnt += s.size()/2;
	
	cout << cnt << endl;
}


int main()
{
	string s;
	
	int t;
	cin >> t;
	cin.ignore();
	while (t--){
		getline(cin, s);
		process(s);
	}
	
	return 0;
}
