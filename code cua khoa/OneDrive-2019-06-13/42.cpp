#include <iostream>

using namespace std;

int main()
{
	int a[102];
	int n, k=0;
	
	cin >> n;
	for(int i=0; i<n; ++i)
		cin >> a[i];
		
	for(int i=0; i<n-1; ++i){
		bool c=false;
		int id=i;
		for(int j=i+1; j<n; ++j)
			if (a[j]<a[id]){
				id = j;
			}
		if (id!=i){
			c = true;
			int tmp=a[i]; a[i]=a[id]; a[id]=tmp;
		}
		
	//	if (c){
			cout << "Buoc " << ++k << ": ";
			for(int j=0; j<n; ++j)
				cout << a[j] << " ";
			cout << endl;
	//	}
	}
	
	return 0;
}
