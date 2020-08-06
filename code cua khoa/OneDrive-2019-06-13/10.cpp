#include <iostream>

#define MAX 100
using namespace std;

int t[MAX], tmax[MAX];
int n, c, cbest;
long long s, sum;


void update(){
	if (sum==s && c<cbest)
		cbest = c;	
}

void init(){
	cin >> n >> s;
	for(int i=1; i<=n; ++i)
		cin >> t[i];
	tmax[n] = t[n];
	for(int i=n-1; i>=1; --i){
		tmax[i] = tmax[i+1];
		if (t[i]>tmax[i]) tmax[i] = t[i];
	}
	sum = c = 0;
	cbest = MAX;
}

void branchBound(int i){
	if (c+(s-sum)/tmax[i] >= cbest) return;
	for(int j=0; j<=1; ++j){
		c += j;
		sum += j*t[i];
		if (i==n) update();
		else if (sum<=s) branchBound(i+1);
		c -= j;
		sum -= j*t[i];
		
		
	}
}

int main()
{
	init();
	branchBound(1);
	cout << cbest;
	return 0;
}
