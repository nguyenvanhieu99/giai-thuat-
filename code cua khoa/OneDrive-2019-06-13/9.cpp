#include <iostream>

#define MAX 100

using namespace std;

int x[MAX];
int n, k;

long long next(){
	
	int p=n;
	long long s=0;
	
	while (x[p]==9) --p;
	if (p>0){
		x[p] = 9;
		for(int i=p+1; i<=n; ++i)
		x[i] = 0;
	}else{
		for(int i=2; i<=n; ++i)
			x[i] = 0;
		x[++n] = 0;
	}
	
	for(int i=1; i<=n; ++i)
		s = s*10 + x[i];
	return s;
}


long long cal(int k){

	long long s;
	n = 1;
	x[1] = 0;
	while ((s=next())%k); 
	return s;
}

int main()
{
	int t;
	cin >> t;
	
	while (t--){
		cin >> k;
		cout << cal(k) << endl;
	}

	return 0;
}

