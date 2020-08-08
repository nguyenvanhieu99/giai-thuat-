#include <iostream>

using namespace std;

void cal(int n){
	int n4=0, n7=0;
	
	while (1){
		if (n%7==0){
			n7 = n/7;
			n = 0;
			break;
		}
		
		if (n>=4){
			++n4;
			n -= 4;
		}
		if (n<4) break;
	}
	
	if (n!=0) cout << -1 << endl;
	else{
		for(int i=1; i<=n4; ++i)
			cout << '4';
		for(int i=1; i<=n7; ++i)
			cout << '7';
		cout << endl;
	}
}

int main()
{
	int t, n;
	t=1;
	while (t--){
		cin >> n;
		cal(n);
	}
	
	return 0;
}
