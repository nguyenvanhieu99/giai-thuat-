#include <iostream>
#include <queue>
#include <string>

using namespace std;

void init(){
	int n, x;
	string s;
	queue<int> q;
	cin >> n;
	
	while (n--){
		cin >> s;
		if (s=="PUSH"){
			cin >> x;
			q.push(x);
		} else if (s=="PRINTFRONT"){
			if (q.empty()) cout << "NONE" << endl;
			else cout << q.front() << endl;
		} else if (!q.empty()) q.pop();
	}
}

int main()
{
	init();
	return 0;
}
