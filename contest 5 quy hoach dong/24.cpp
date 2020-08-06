#include<iostream>

using namespace std;
long long f[30][30];
void tinh(){
	int i,j;
	for(int i=0;i<=25;i++){
		f[i][0]=1;
		f[0][i]=1;
	}
	for(int i=1;i<=25;i++){
	for(int j=1;j<=25;j++){
		f[i][j]=f[i-1][j]+f[i][j-1];
	}
	}
}
int main(){
	int t,n,m;
	tinh();
	cin>>t;
	while(t--){
		cin>>n>>m;
		
		cout<<f[n][m]<<endl;
	}

	return 0;
}

