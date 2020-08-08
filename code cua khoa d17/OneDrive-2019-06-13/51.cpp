#include <iostream>

#define MAX 105
using namespace std;

int main()
{
	int p[MAX], d[MAX];
	int n;
	
	cin >> n;
	for(int i=0; i<n; ++i)
		cin >> p[i] >> d[i];
	
	for(int i=0; i<n-1; ++i)
		for(int j=i+1; j<n; ++j)
			if (p[i]>p[j]){
				int tmp=p[i]; p[i]=p[j]; p[j]=tmp;
				tmp=d[i]; d[i]=d[j]; d[j]=tmp;
			}
	
	int t=0;
	for(int i=0; i<n; ++i)
		if (p[i]>=t) t = p[i]+d[i];
		else  t+= d[i];
	cout << t;

	return 0;
}
