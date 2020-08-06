#include <iostream>

#define MAX 50

int n, k;
int x[MAX], c[MAX];

using namespace std;

void input(){
	cin >> n >> k;
	
	for(int i=1; i<=n; ++i)
		c[i] = 0;
		
	for(int i=1; i<=k; ++i){
		cin >> x[i];
		c[x[i]] = 1;
	}
}

bool isFinal(){
	for(int i=1; i<=k; ++i)
		if (x[i]!=n-k+i) return false;
	return true;
}

void cal(){
	if (isFinal()) cout << k << endl;
	else{
		int r=0;
		for(int i=k; i>=1; --i)
			if (x[i]!=n-k+i){
				++x[i];
				if (c[x[i]]==0){
					++r;
					c[x[i]] = 1;
				}
				
				for(int j=i+1; j<=k; ++j){
					x[j] = x[j-1]+1;
					if (c[x[j]]==0){
						++r;
						c[x[j]] = 1;
					}
				}
			break;
			}
		cout << r << endl;
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--){
		input();
		cal();
	}

	return 0;
}
