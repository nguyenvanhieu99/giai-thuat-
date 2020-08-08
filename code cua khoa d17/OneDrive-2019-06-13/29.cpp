#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
	int n, k;
	char c;
	stack<int> s;
	
	cin >> n >> k;
	for(int i=0; i<n; ++i){
		cin >> c;
		int x=c-'0';
		if (s.empty()) s.push(x);
		else{
			while (k>0 && !s.empty() && x>s.top()){
				--k;
				s.pop();
			}
			s.push(x);
		}
	}
	
	while (k>0 && !s.empty()){
		--k;
		s.pop();
	}
	
	vector<int> v;
	while (!s.empty()){
		v.push_back(s.top());
		s.pop();
	}
	
	for(int i=v.size()-1; i>=0; --i)
		cout << v[i];

	return 0;
}
