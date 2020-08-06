#include <iostream>
#include <queue>

using namespace std;

void init(){
	int t, n;
	queue<int> q;
	cin >> n;
	
	while (n--){
		cin >> t;
		switch (t){
			case 1:
				cout << q.size() << endl;
				break;
			case 2:
				if (q.empty()) cout << "YES";
				else cout << "NO";
				cout << endl;
				break;
			case 3:
				int x;
				cin >> x;
				q.push(x);
				break;
			case 4:
				if (!q.empty()) q.pop();
				break;
			case 5:
				if (q.empty()) cout << -1;
				else cout << q.front();
				cout << endl;
				break;
			case 6:
				if (q.empty()) cout << -1;
				else cout << q.back();
				cout << endl;
				break;
			default:
				break;
		}
	}
	
}
int main()
{
	int t;
	cin >> t;
	while (t--){
		init();
	}
	
	return 0;
}
