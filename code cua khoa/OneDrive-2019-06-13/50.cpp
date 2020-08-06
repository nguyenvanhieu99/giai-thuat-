#include <iostream>
#include <algorithm>
#include <vector>

#define MAX 1000005
using namespace std;

void init(){
	int n, q, t;
	vector<int> x;
	
	cin >> n;
	for(int i=0; i<n; ++i){
		cin >> t;
		x.push_back(t);
	}
	
	sort(x.begin(), x.end());
	int *f=new int[MAX]{};
	
	t = 0;
	for(int i=0; i<n; ++i){
		f[x[i]] = ++t;
		if (i==n-1) break;
		for(int j=x[i]; j<x[i+1]; ++j)
			f[j] = t;
	}
	

	
	cin >> q;
	for(int i=0; i<q; ++i){
		cin >> t;
		if (t<x[0]) cout << 0 << endl;
		else if (t>x[n-1]) cout << f[x[n-1]] << endl;
		else cout << f[t] << endl;
	}
	
	
}


int main()
{

	init();
	return 0;
}
