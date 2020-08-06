#include <iostream>
#include <string>
#include <climits>

#define MAX 20
using namespace std;

string list[MAX], x[MAX];
int d[MAX];
int n, r, best;

void init(){
	cin >> n;
	for(int i=1; i<=n; ++i)
		cin >> list[i];
	
	r = 0;
	best = INT_MAX;
}

void update(){
	if (r<best) best=r;
}

int cal(int i){
	if (i>1){
		int *p=new int['Z'+1]{};
		int cnt=0;
		
		for(int j=0; j<x[i-1].length(); ++j)
			++p[x[i-1][j]];
			
		for(int j=0; j<x[i].length(); ++j)
			if (p[x[i][j]]) ++cnt;
		return cnt;
	} else return 0;
}

void backTrack(int i){
	for(int j=1; j<=n; ++j)
		if (d[j]==0){
			d[j] = 1;
			x[i] = list[j];
			
			int tmp=cal(i);
			r += tmp;
			if (i==n) update();
			else if (r<=best) backTrack(i+1);
			r -= tmp;
			d[j] = 0;
		}	
}

int main()
{
	init();
	backTrack(1);
	cout << best;
	return 0;
}
