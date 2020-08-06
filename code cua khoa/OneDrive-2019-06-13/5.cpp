#include <iostream>

#define MAX 11
using namespace std;


int a[MAX][MAX], res[MAX][MAX];
int x[MAX];
bool c[MAX];

int n, k, cnt=0, s=0;

void input(){
	cin >> n >> k;
	for(int i=1; i<=n; ++i){
		c[i] = true;
		for(int j=1; j<=n; ++j)
			cin >> a[i][j];
	}
}

void update(){
	++cnt;
	for(int i=1; i<=n; ++i)
		res[cnt][i] = x[i];
}

void backTrack(int i){
	for(int j=1; j<=n; ++j)
		if (c[j]){
			x[i] = j;
			c[j] = false;
			s += a[i][j];
			if (i<n && s<=k) backTrack(i+1);
			else if (i==n && s==k) update();
			s -= a[i][j];
			c[j] = true;
		}	
}


void output(){
	cout << cnt << endl;
	for(int i=1; i<=cnt; ++i){
		for(int j=1; j<=n; ++j)
			cout << res[i][j] << " ";
		cout << endl;
	}
}

int main()
{
	input();
	backTrack(1);
	output();

	return 0;
}

