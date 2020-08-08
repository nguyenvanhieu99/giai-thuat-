#include <iostream>
#include <cstring>
#include <vector>
#include <cmath>

#define INF 1000111
using namespace std;

int w[250250][250250], lab[505][505];
int n, m;

const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, 1, 0, -1};

bool valid(int x, int y){
	return x>0 && y>0 && x<=n && y<=m;
}

void init(){
	cin >> n >> m;
	
	int s = n*m;
	for(int i=1; i<=s; ++i){
		for(int j=1; j<=s; ++j)
			w[i][j] = INF;
			
		w[i][i] = 0;
	}
	

	int k = 0;
	for(int i=1; i<=n; ++i)
		for(int j=1; j<=m; ++j)
			lab[i][j] = ++k;
	
	
	
	int x;
	for(int i=1; i<=n; ++i)
		for(int j=1; j<=m; ++j){
			cin >> x;
			int v = lab[i][j];
			for(int k=0; k<4; ++k){
				if (valid(i+dx[k], j+dy[k])){
					int u = lab[i+dx[k]][j+dy[k]];
					w[u][v] = x;
				}
			}
		}
	
	n = n*m;
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=n; ++j)
			if (w[i][j]==INF) cout << "oo ";
			else cout << w[i][j] << " ";
		cout << endl;
	}
	

}






int main()
{
//	init();
	return 0;
}
