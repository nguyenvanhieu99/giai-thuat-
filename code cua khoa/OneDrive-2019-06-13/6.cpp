#include <iostream>

#define MAX 20

using namespace std;

int a[MAX][MAX];
int c[MAX], md[2*MAX], ad[2*MAX], x[MAX];
int n, cnt=0;

void backTrack(int i){
	for(int j=1; j<=n; ++j)
		if(c[j]==0 && md[i-j+n]==0 && ad[i+j-1]==0){
			x[i] = j;
			c[j] = 1;
			md[i-j+n] = 1;
			ad[i+j-1] = 1;
			if (i<n) backTrack(i+1);
			else ++cnt;
			c[j] = 0;
			md[i-j+n] = 0;
			ad[i+j-1] = 0;
		}
}

int main()
{
	int n;
	cin >> n;
	backTrack(1);
	cout << cnt;
	for(int i=0;i<40;i++) {
		md[i]=0;
		ad[i]=0;
		c[i]=0;
	}
//	int a[11] = {0, 1, 0, 0, 2, 10, 4, 40, 92, 352, 724};
//	cout << a[n];

	return 0;
}
