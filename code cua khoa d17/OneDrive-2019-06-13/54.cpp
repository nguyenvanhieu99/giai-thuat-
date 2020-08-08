#include <iostream>
#include <list>
#include <iterator>


using namespace std;

void init(){
	int n, m;
	list<int> L;
	

	cin >> n >> m;
	for(int i=1; i<=n; ++i)
		L.push_back(i);
		
	int p=0;
	while (L.size()>1){
		int x = m%L.size();
		if (x){
			p += x;
			p %= L.size();
		}
		
		list<int>::iterator it=L.begin();
		std::advance(it, p);
		L.erase(it);
		if (p>L.size()-1) p=0;
	}
	
	cout << L.front() << endl;

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
