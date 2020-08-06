#include <iostream>
#include <list>

using namespace std;


int main()
{
	int n;
	long long x;
	list<long long> L;
	
	cin >> n;
	for(int i=0; i<n; ++i){
		cin >> x;
		L.push_back(x);
	}
		
	L.sort();
	for(list<long long>::iterator it=L.begin(); it!=L.end(); ++it)
		cout << *it << " ";
	return 0;
}
