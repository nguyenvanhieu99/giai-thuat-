#include <iostream>
#include <stack>
#include <cctype>
#include <string>

using namespace std;

int priority(char c){
	if (c=='(') return 0;
	if (c=='+' || c=='-') return 1;
	if (c=='*' || c=='/') return 2;
	if (c=='^') return 3;
	return 4;
}

bool isop(char c){
	return c=='+' || c=='-' || c=='*' || c=='/' || c=='^';
}

bool isalpha(char c){
	return c>='a' && c<='z';
}


void transform(){
	stack<char> s;
	char c;

	
	while ((c=getc(stdin)) && c!='\n' && c!=EOF){
		if (c=='(') s.push(c);
		else if  (isalpha(c)) cout << c;
		else if (isop(c)){
			while (!s.empty() && priority(s.top())>=priority(c)){
				cout << s.top();
				s.pop();
			}
			s.push(c);
		} else if (c==')'){
			while (s.top()!='('){
				cout << s.top();
				s.pop();
			}
			s.pop();
		}
	}
	
	while (!s.empty()){
		cout << s.top();
		s.pop();
	}
	cout << endl;
}


int main()
{
	string str;
	int n;
	cin >> n;
	cin.ignore();
	
	while (n--){
		transform();
	}
	
	return 0;
}
