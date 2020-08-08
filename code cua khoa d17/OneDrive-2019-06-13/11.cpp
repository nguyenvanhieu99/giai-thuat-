#include <iostream>

#define MAX 100
using namespace std;

int w[MAX];
int n, c, weight, bestw;

void init(){
	cin >> c >> n;
	for(int i=1; i<=n; ++i)
		cin >> w[i];
	weight = bestw = 0;
}

void update(){
	if (weight<=c && weight>bestw)
		bestw = weight;	
}
void branchBound(int i){
	if (weight>c) return;
	for(int j=0; j<=1; ++j){
		weight += j*w[i];
		if (i==n) update();
		else if (weight<=c) branchBound(i+1);
		weight -= j*w[i];
	}
}

int main()
{
	init();
	branchBound(1);
	cout << bestw;
	return 0;
}
