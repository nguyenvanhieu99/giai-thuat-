#include <iostream>

using namespace std;

int x[20];
int k, n, s=0;

void output(){
	for(int i=0; i<n; ++i)
		cout << x[i];
	cout << endl;
}

void backTrack(int i){
	for(int j=0; j<2; ++j){
		x[i] = j;
		s += j;
		if (i<n-1 && s<=k) backTrack(i+1);
		else if (s==k) output();
		s -= j;
	}
}




int main()
{
	int t;
	cin >> t;
	while (t--){
		cin >> n >> k;
		backTrack(0);
	}
	
	return 0;
}


