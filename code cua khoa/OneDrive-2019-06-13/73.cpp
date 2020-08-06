#include <iostream>
#include <stack>

using namespace std;

bool isop(char c){
	return c=='+' || c=='-' || c=='*' || c=='/';
}

void init()
{
	stack<char> st;
	string s;

	
	getline(cin, s);
	for(int i=0; i<s.length(); ++i){
		char c=s[i];
		if (c==')'){
			bool m=false;
			char ch;
			while ((c=st.top())!='('){
				if (isop(c)) m=true;
				st.pop();
			}
			st.pop();
			
			if (!m){
				cout << "Yes" << endl;
				return;
			}
		} else st.push(c);
	}
	
	cout << "No" << endl;
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
