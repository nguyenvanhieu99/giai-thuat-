#include <iostream>

#define MAX 1002

using std::cin;
using std::cout;
using std::endl;


int L[MAX][MAX];
char a[MAX], b[MAX];
int n, m;

void init(){
	char c;
	n = m = 0;
	while ((c=getc(stdin)) && c!='\n')
		a[++n] = c;
	while ((c=getc(stdin)) && c!='\n' && c!=EOF)
		b[++m] = c;	
}

int max(int a, int b){
	return a>b ? a:b;
}

void optimize(){
	for(int i=1; i<=n; ++i)
		for(int j=1; j<=m; ++j)
			if (a[i]==b[j]) L[i][j]=L[i-1][j-1]+1;
			else L[i][j]=max(L[i-1][j], L[i][j-1]);
	cout << L[n][m];
}

int main()
{
	init();
	optimize();
	
	return 0;
}
