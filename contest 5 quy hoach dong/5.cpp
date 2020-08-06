//bai 5 :tinh toan so cach bieu dien tap con co k phan tu
//bai 7,11(so lon),12(lap tu n quay ve n-k+1) , 25, 
#include<iostream>

using namespace std;
int c[1005][1005];
int m=1e9+7;
void tinh(){
	int i,j;
	for(int i=0;i<=1000;i++){
		for(int j=0;j<=i;j++){
			if(j==0||j==i) c[i][j]=1;
			else{
				c[i][j]=(c[i-1][j]+c[i-1][j-1])%m;
			}
		}
	}
}
int main(){
	int t,n,k;
	cin>>t;
		tinh();
	while(t--){
		cin>>n>>k;
	
		cout<<c[n][k]<<endl;
	}

	return 0;
}

