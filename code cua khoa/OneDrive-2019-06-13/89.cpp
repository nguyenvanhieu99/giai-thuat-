#include <iostream>
#include <list>

using namespace std;



int main()
{
	int n, m;
	list<int> Ke[50];
	
	cin >> n >> m;
	
	int u, v;
	for(int i=0; i<m; ++i){
		cin >> u >> v;
		Ke[u].push_back(v);
		Ke[v].push_back(u);
	}
	
	for(int i=1; i<=n; ++i){
		while (!Ke[i].empty()){
			cout << Ke[i].front() << " ";
			Ke[i].pop_front();
		}
		cout << endl;
	}
			
	
	return 0;
}
