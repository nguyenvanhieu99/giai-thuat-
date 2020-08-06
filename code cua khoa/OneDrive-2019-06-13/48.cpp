#include <iostream>
#include <algorithm>
#include <vector>

#define MAX 10000000001LL

using namespace std;

void init(){
	int n, x;
	vector<int> a;
	
	cin >> n;
	for(int i=0; i<n; ++i){
		cin >> x;
		a.push_back(x);
	}
	
	std::sort(a.begin(), a.end());
	
	long long t, c=MAX, d=0;
	
	for(int i=0; i<a.size()-1; ++i){
		t = a[i+1]-a[i];
		if (t<c){
			c = t;
			d = 1;
		} else if (t==c) ++d;
	}
	
	cout << c << " " << d << endl;
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
