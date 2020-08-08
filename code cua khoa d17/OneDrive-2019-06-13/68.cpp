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
	for(int i=str.length()-1; i>=0; i--){
		c = str[i];
		if (isalpha(c)) s.push(string(1, c));
		else if (isop(c)){
			string op1=s.top(); s.pop();
			string op2=s.top(); s.pop();
			string tmp="("+op1+c+op2+")";
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
