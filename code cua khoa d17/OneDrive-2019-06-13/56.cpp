#include <iostream>
#include <stack>
#include <string>

using namespace std;



int main()
{
	string str;
	int x;
	stack<int> s;
	
	cin >> x;
	while (cin >> str){
		if (str=="PUSH"){
			cin >> x;
			s.push(x);
		}
		
		if (str=="POP"){
			if (!s.empty()) s.pop();
		}
		
		if (str=="PRINT"){
			if (s.empty()) cout << "NONE";
			else cout << s.top();
			cout << endl;
		}
	}

	return 0;
}
