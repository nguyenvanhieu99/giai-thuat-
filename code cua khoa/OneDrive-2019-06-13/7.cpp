#include <iostream>

#define MAX 10

using namespace std;

int a[MAX][MAX], score[MAX][MAX];
int c[MAX], md[2*MAX], ad[2*MAX], x[MAX];
int n=8, maxs, s;

void backTrack(int i){
	for(int j=1; j<=n; ++j)
		if(c[j]==0 && md[i-j+n]==0 && ad[i+j-1]==0){
			x[i] = j;
			c[j] = 1;
			md[i-j+n] = 1;
			ad[i+j-1] = 1;
			s += score[i][j];
			if (i<n) backTrack(i+1);
			else if (s>maxs) maxs = s;
			s -= score[i][j];
			c[j] = 0;
			md[i-j+n] = 0;
			ad[i+j-1] = 0;
		}
}

void input(){
	for(int i=1; i<=8; ++i)
		for(int j=1; j<=8; ++j)
			cin >> score[i][j];
}

int main()
{
	int t;
	cin >> t;
	
	while (t--){
		input();
		maxs = s = 0;
		backTrack(1);
		cout << maxs << endl;
	}


	return 0;
}
