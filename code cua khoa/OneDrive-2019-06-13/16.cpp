#include <iostream>
#include <cmath>

using namespace std;

int cal(int n, unsigned long long k){
	if (n==0) return 1;
	unsigned long long x=(1ULL<<n);
	if (k==x) return n+1;
	else{
		if (k<x) return cal(n-1, k);
		else return cal(n-1, k-x);
	}
}


int main()
{
	int t, n;
	unsigned long long k;
	
	cin >> t;
	while (t--){
		cin >> n >> k;
		cout << cal(n, k) << endl;
	}
	return 0;
}
