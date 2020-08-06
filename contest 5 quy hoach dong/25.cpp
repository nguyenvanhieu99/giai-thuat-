#include<bits/stdc++.h>

using namespace std;
long long f[55];
void tinh(){
	f[1]=1;f[2]=2,f[3]=4;
	for(int i=4;i<=55;i++){
		f[i]=f[i-1]+f[i-2]+f[i-3];
	}
}
int main(){
	int t,n;cin>>t;
	tinh();
	while(t--){
		cin>>n;
		cout<<f[n]<<endl;
	}

	return 0;
}

