#include <iostream>

using namespace std;

void init(){
	int n, k, x;
	bool mark=false;
	
	cin >> n >> k;
	for(int i=0; i<n; ++i){
		cin >> x;
		if (x==k && !mark){
			cout << i+1 << endl;
			mark = true;
		}
	}
	
	if (!mark) cout << "NO" << endl;

}


int main()
{
	int t;
	cin >> t;
	while (t--){
		init();
	}
	return 0;
}
