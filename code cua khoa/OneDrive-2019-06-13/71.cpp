#include <iostream>
#include <stack>
#include <cctype>

using namespace std;

bool isop(char c){
	return c=='+' || c=='-' || c=='*' || c=='/';
}

void solve(){
	stack<string> s;
	string str;
	char c;
	
	getline(cin, str);
	for(int i=0; i<str.length(); i++){
		c = str[i];
		if (isalpha(c)) s.push(string(1, c));
		else if (isop(c)){
			string op1=s.top(); s.pop();
			string op2=s.top(); s.pop();
			string tmp="("+op2+c+op1+")";
			s.push(tmp);
		}
	}
	
	cout << s.top() << endl;
	
}

int main()
{
	int t;
	cin >> t;
	cin.ignore();
	
	while (t--){
		solve();
	}
	
	return 0;
}
