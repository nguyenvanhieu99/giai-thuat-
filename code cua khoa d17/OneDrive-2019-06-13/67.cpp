#include <iostream>
#include <stack>

using namespace std;

void solve()
{
	stack<int> s;
	char c;
	int n=0;
	
	while ((c=getc(stdin)) && c!='\n' && c!=EOF){
		if (c=='('){
			s.push(++n);
			cout << n << " ";
		}
		else if (c==')'){
			cout << s.top() << " ";
			s.pop();
		}
	}
	cout << endl;
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
