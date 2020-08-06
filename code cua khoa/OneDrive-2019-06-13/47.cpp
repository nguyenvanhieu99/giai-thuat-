#include <iostream>
#include <list>

using namespace std;

void init(){
	int n, x;
	list<int> a, L;
	
	cin >> n;
	for(int i=0; i<n; ++i){
		cin >> x;
		a.push_back(x);
		L.push_back(x);
	}
	
	L.sort();
	
	
	int s1=0, s2=0;
	

	for(list<int>::iterator it1=a.begin(), it2=L.begin(); it1!=a.end(); ++it1, ++it2)
		if (*it1==*it2) ++s1;
		else break;
		
	if (s1==n){
		cout << "YES" << endl;
		return;
	}	
	
	for(list<int>::reverse_iterator rit1=a.rbegin(), rit2=L.rbegin(); rit1!=a.rend(); ++rit1, ++rit2)
		if (*rit1==*rit2) ++s2;
		else break;
	
	cout << n-s1-s2 << endl;	
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
