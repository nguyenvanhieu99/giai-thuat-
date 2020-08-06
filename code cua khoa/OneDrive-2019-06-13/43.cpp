#include <iostream>
#include <list>

using namespace std;


int main()
{
	int n, k=0, x;
	list<int> L;

	
	cin >> n;
	for(int i=0; i<n; ++i){
		cin >> x;
		L.push_back(x);
		L.sort();
		cout << "Buoc " << k++ << ": ";
		for(list<int>::iterator it=L.begin(); it!=L.end(); ++it)
			cout << *it << " ";
		cout << endl;
	}

	return 0;
}

