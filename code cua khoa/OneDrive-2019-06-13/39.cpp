#include <iostream>

#define MK 900
#define MN 100
#define M 1000000007
using namespace std;

long long F[MN+1][MK+1];

void init(){
	F[0][0] = 1;
	
	for(int i=1; i<=MN; ++i)
		for(int k=1; k<=9*i; ++k)
			for(int j=0; j<=9 && j<=k; ++j)
				F[i][k] = (F[i][k] + F[i-1][k-j])%M;
		
}


int main()
{
	int t, n, k;
	cin >> t;
	init();
	while (t--){
		cin >> n >> k;
		if (k>MK) cout << 0 << endl;
		else cout << F[n][k] << endl;
	}
	
	return 0;
}
