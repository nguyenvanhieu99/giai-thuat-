#include <iostream>

using namespace std;

long long S[100];
long long F(int n){
	if (S[n]==0){
		if (n==1 || n==2) return 1;
		else S[n] = F(n-1) + F(n-2);
	}
	return S[n];
}

char G(int n, long long i){
	if (n==1) return 'A';
	if (n==2) return 'B';
	
	if (i>F(n-2)) return G(n-1, i-F(n-2));
	else return G(n-2, i);
}

int main()
{
	int t, n;
	long long i;
	
	cin >> t;
	while (t--){
		cin >> n >> i;
		cout << G(n, i) << endl;
	}
	return 0;
}
