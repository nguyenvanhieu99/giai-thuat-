#include <iostream>
#include <stack>
#include <string>

using namespace std;

void show(stack<int> s){
	if (!s.empty()){
		int tmp=s.top(); s.pop();
		show(s);
		cout << tmp << " ";
	}
}



int main()
{
	string str;
	int x;
	stack<int> s;
	
	while (cin >> str){
		if (str=="push"){
			cin >> x;
			s.push(x);
		}
		
		if (str=="pop"){
			if (!s.empty()) s.pop();
		}
		
		if (str=="show"){
			if (s.empty()) cout << "empty";
			else show(s);
			cout << endl;
		}
	}

	return 0;
}
