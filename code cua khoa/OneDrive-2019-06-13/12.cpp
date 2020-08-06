#include <iostream>
#include <climits>

#define MAX 20
using namespace std;

int c[MAX][MAX], d[MAX], x[MAX];
int n, fee, minf;

void init(){
	cin >> n;
	for(int i=1; i<=n; ++i)
		for(int j=1; j<=n; ++j)
			cin >> c[i][j];
	x[1] = 1;
	fee = 0;
	minf = INT_MAX;
}

void update(){
	if (fee+c[x[n]][1]<minf)
		minf = fee+c[x[n]][1];
}

void backTrack(int i){
	for(int j=2; j<=n; ++j)
		if (d[j]==0){
			d[j] = 1;
			x[i] = j;
			fee += c[x[i-1]][j];
			if (i==n) update();
			else if (fee<minf) backTrack(i+1);
			fee -= c[x[i-1]][j];
			d[j] = 0;
		}	
}

int main()
{
	init();
	backTrack(2);
	cout << minf;
	return 0;
}
