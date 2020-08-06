#include <iostream>

#define MAX 1000111000111LL

using namespace std;

const long long oo=1000111000111000111LL;
const int p[10]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
int gh[10];
long long lt[10][100];

void init(){
	for(int k=0; k<10; ++k){
		lt[k][0] = 1;
		gh[k] = 0;
		
		while (lt[k][gh[k]] < oo/p[k]){
			++gh[k];
			lt[k][gh[k]] = lt[k][gh[k]-1]*p[k];
		}
	}
}

long long f[1011][10];

long long get(int n, int k){
	if (n==1) return 1;
	if (k<0) return oo;
	
	if (f[n][k]) return f[n][k];
	long long res=get(n, k-1);
	
	//----------------------------
	for(int i=1; i<=gh[k]; ++i)
		if (n%(i+1)==0){
			long long t=get(n/(i+1), k-1);
			if (t < oo/lt[k][i]) res=min(res, t*lt[k][i]);
		}
	return f[n][k]=res;
}

int main()
{
	init();
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		cout << get(n, 9) << endl;
	}
	
	return 0;
}
