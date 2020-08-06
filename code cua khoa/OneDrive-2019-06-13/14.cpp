#include <iostream>

#define M 1000000007
using namespace std;

unsigned long long mod_pow(unsigned long long a, unsigned long long b, unsigned long long c){
	if (b==0) return 1%c;
	else{
		unsigned long long x=mod_pow(a, b/2, c);
		if (b&1) return (((x*x)%c)*a)%c;
		else return (x*x)%c;
	}
}

int main()
{
	int t;
	unsigned long long n, k;
	cin >> t;
	while (t--){
		cin >> n >> k;
		cout << mod_pow(n, k, M) << endl;
	}
	return 0;
}
