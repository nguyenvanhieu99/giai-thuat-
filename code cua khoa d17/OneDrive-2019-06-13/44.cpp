#include <iostream>

using namespace std;

int main()
{
	int a[102];
	int n, k=0;
	
	cin >> n;
	for(int i=0; i<n; ++i)
		cin >> a[i];
		
	for(int i=n-1; i>0; --i){
		bool c=false;
		for(int j=0; j<i; ++j)
			if (a[j]>a[j+1]){
				int tmp=a[j]; a[j]=a[j+1]; a[j+1]=tmp;
				c = true;
			}
		
		if (c){
			cout << "Buoc " << ++k << ": ";
			for(int j=0; j<n; ++j)
				cout << a[j] << " ";
			cout << endl;
		}
	}
	
	return 0;
}
