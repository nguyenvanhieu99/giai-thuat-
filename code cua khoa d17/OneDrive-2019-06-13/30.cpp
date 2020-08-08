#include <iostream>

#define MAX1 101
#define MAX2 25001

using namespace std;

int w[MAX1];
long long f[MAX1][MAX2];
int c, n;

void init(){
	cin >> c >> n;
	for(int i=1; i<=n; ++i)
		cin >> w[i];	
}

void optimize(){

	for(int i=0; i<=n; ++i) f[0][i]=0;
	
	for(int i=1; i<=n; ++i)
		for(int j=0; j<=c; ++j){
			f[i][j] = f[i-1][j];
			if ((w[i]<=j) && (f[i][j]<(f[i-1][j-w[i]]+w[i])))
				f[i][j] = f[i-1][j-w[i]]+w[i];
		}
	
	cout << f[n][c];
}

int main()
{
	init();
	optimize();
	
	return 0;
}
