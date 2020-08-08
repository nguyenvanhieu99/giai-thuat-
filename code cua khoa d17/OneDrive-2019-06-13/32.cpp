#include <iostream>

#define MAX 1005
#define oo 999999

using std::cin;
using std::cout;
using std::endl;

int a[MAX], L[MAX];
int n;


void init(){
	cin >> n;
	for(int i=1; i<=n; ++i)
		cin >> a[i];

}

void optimize(){
	
	a[0] = -oo; a[n+1] = +oo;
	L[n+1] = 1;

	for(int i=n; i>=0; --i){
		int jmax=n+1;
		for(int j=i+1; j<=n+1; ++j)
			if (a[j]>a[i] && L[j]>L[jmax])
				jmax = j;
		L[i] = L[jmax]+1;
	}
		
	cout << L[0]-2;
}

int main()
{
	init();
	optimize();
	
	return 0;
}
