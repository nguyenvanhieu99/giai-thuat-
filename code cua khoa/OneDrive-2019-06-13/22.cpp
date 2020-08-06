#include <iostream>
#include <cmath>

using namespace std;

int cal(long long n){

	if (n&1) return 0;
	
	int sn=sqrt(n), res=1;
	int t;

	for(int i=2; i<=sn; i++)
		if (n%i==0){
			if (i%2==0) ++res;
			if ((t=n/i)!=sn && t%2==0) ++res;
		}
	return res;
}


int main()
{
	int t;
	long long n;
	
	cin >> t;
	while (t--){
		cin >> n;
		cout << cal(n) << endl;
	}
	return 0;
}
