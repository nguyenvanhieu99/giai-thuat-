#include <iostream>

#define min(a,b) (a<b? a:b)

using namespace std;
int n, m;

void init(){

	cin >> n >> m;
	long long **a = new long long*[n+1];
	long long **F = new long long*[n+1];
	for(int i=1; i<=n; ++i){
		a[i] = new long long[m+1];
		F[i] = new long long[m+1]{};
		for(int j=1; j<=m; ++j)
			cin >> a[i][j];
	}
		
	if (n>=1){
		F[1][1] = a[1][1];
		
		for(int j=2; j<=m; ++j)
			F[1][j] = a[1][j] + F[1][j-1];
		for(int i=2; i<=n; ++i)
			F[i][1] = a[i][1] + F[i-1][1];
			
		if (n>=2){
			F[2][2] = a[1][1] + a[2][2];
			for(int j=3; j<=m; ++j)
					F[2][j] = a[2][j] + min(min(F[1][j-1], F[1][j]), F[2][j-1]);
		}
	}
	
	for(int i=3; i<=n; ++i)
		for(int j=2; j<=m; ++j)	
			F[i][j] = a[i][j] + min(min(F[i-1][j-1], F[i-1][j]), F[i][j-1]);
	
	cout << F[n][m] << endl;
}


int main()
{
	int t, n, k;
	cin >> t;
	while (t--){
		init();
	}
	
	return 0;
}
