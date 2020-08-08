#include <iostream>
#include <stack>

using namespace std;

char rev(char c){
	if (c==')') return '(';
	if (c==']') return '[';
	return '{';
}


void init()
{
	char c;
	bool mark=true;
	stack<char> s;

	while ((c=getc(stdin)) && c!='\n' && c!=EOF){
		if (mark){
			if (c=='(' || c=='[' || c=='{')
				s.push(c);
			else if (c==')' || c==']' || c=='}'){
				if (!s.empty()){
					if (rev(c)!=s.top()) mark=false;
					s.pop();
				} else mark=false;
			}	
		}
	}
	
	
	if (mark && s.empty()) cout << "YES";
	else cout << "NO";
	cout << endl;
}


int main()
{
	int t;
	cin >> t;
	cin.ignore();
	
	while (t--)
		init();
		
	
	return 0;
}
