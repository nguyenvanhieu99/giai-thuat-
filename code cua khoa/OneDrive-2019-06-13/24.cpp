#include <iostream>

using namespace std;

int M[]={1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

int cal(int n){
	
	int s=sizeof(M)/sizeof(int);
	int res=0;
	
	for(int i=s-1; i>=0 && n; --i){
		int t=n/M[i];
		res += t;
		n -= t*M[i];
	}
	
	return res;
}



int main()
{
	int t, n;
	
	cin >> t;
	while (t--){
		cin >> n;
		cout << cal(n) << endl;
	}
	return 0;
}
