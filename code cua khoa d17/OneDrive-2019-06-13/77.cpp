#include <iostream>
#include <deque>
#include <string>

using namespace std;

void init(){
	int n, x;
	string s;
	deque<int> q;
	cin >> n;
	
	while (n--){
		cin >> s;
		if (s=="PUSHFRONT"){
			cin >> x;
			q.push_front(x);
		} else if (s=="PRINTFRONT"){
			if (q.empty()) cout << "NONE" << endl;
			else cout << q.front() << endl;
		} else if (s=="POPFRONT"){
			if (!q.empty()) q.pop_front();
		} else if (s=="PUSHBACK"){
			cin >> x;
			q.push_back(x);
		} else if (s=="PRINTBACK"){
			if (q.empty()) cout << "NONE" << endl;
			else cout << q.back() << endl;
		} else if (!q.empty()) q.pop_back();
	}
}

int main()
{
	init();
	return 0;
}
