#include <iostream>
using namespace std;

int main()
{
	int n, x;
	char c;
	
	cin >> n;

	for(int i=1; i<=n; ++i){
		while (1){
			cin >> x;
			c = getc(stdin);
			if (x>i) cout << i << " " << x << endl;
			if (c=='\n' || c==EOF) break;
		}
	}
	
	
	return 0;
}
