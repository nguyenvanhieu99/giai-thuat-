#include <iostream>

using namespace std;

void init(){
	int n;
	
	cin >> n;
	int *a = new int[n+1];
	int *f = new int[n+1]{};
	
	cin >> a[0];
	for(int i=1; i<n; ++i){
		cin >> a[i];
		if (a[i]>a[i-1]) f[i-1]=a[i];
	}
	
	f[n-1] = -1;
	for(int i=0; i<n; ++i){
		if (f[i]==0){
			bool m=false;
			for(int j=i+1; j<n; ++j)
				if (a[j]>a[i]){
					m = true;
					f[i] = a[j];
					break;
				}
			if (!m) f[i] = -1;
		}
		
		cout << f[i] << " ";
	}
	cout << endl;
	
}


int main()
{
	int t;
	cin >> t;
	while (t--)
		init();
}
