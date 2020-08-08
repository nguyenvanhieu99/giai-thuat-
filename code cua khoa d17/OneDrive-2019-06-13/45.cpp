#include <iostream>
#include <list>

using namespace std;


int main()
{
	int t, n, x;
	
	cin >> t;
	while (t--){

		cin >> n;
		list<int> L;
		for(int i=0; i<n; ++i){
			cin >> x;
			L.push_back(x);
		}
		
		L.sort();
		for(auto i:L) cout << i << " ";
		cout << endl;
	
	}

	return 0;
}
