#include <iostream>

#define MAX 205

using std::cin;
using std::cout;
using std::endl;

int a[MAX];
int n, s, sum;
bool mark=false;

void init(){
	cin >> n >> s;
	for(int i=1; i<=n; ++i)
		cin >> a[i];
	sum = 0;
}

void backTrack(int i){
	if (mark) return;
	for(int j=0; j<=1; ++j){
		int tmp=j*a[i];
		sum += tmp;
		if (i==n || sum==s){
			if (sum==s && !mark){
				cout << "YES";
				mark = true;
			}
		} else if (sum<s) backTrack(i+1);
		sum -= tmp;
	}
}


int main()
{
	init();
	backTrack(1);
	if (!mark) cout << "NO";
	return 0;
}
