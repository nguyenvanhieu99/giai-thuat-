#include <iostream>

#define oo 1000111LL
using namespace std;

int main()
{
	long long n, x, y, minx, miny;
	
	cin >> n;
	minx = miny = oo;
	for(int i=0; i<n; ++i){
		cin >> x >> y;
		if (x<minx) minx = x;
		if (y<miny) miny = y;
	}
	
	cout << minx*miny;
	
	return 0;
} 
