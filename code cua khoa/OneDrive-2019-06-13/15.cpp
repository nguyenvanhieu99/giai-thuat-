#include <iostream>

#define MAX 100001
using namespace std;

int a[MAX];

void cal(int n, int k){
	
	int p=-1;
	bool mark=false;
	for(int i=0; i<n; ++i){
		cin >> a[i];
		if (!mark && a[i]==k){
			p = i+1;
			mark = true;
		}
	}
	
	if (!mark) cout << "NO" << endl;
	else cout  << p << endl;
}


int main()
{
	int t, n, k;
	cin >> t;
	while (t--){
		cin >> n >> k;
		cal(n, k);
	}
	return 0;
}
