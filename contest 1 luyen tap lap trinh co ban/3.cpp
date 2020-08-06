//kiem tra mang doi  xung 
#include<iostream>

using namespace std;
int n,k[100];
int main(){
	int bo;
	cin>>bo;
	while(bo--){
		cin>>n;
		for(int i=0;i<n;++i){
			cin>>k[i];
		}
		int be=0;
		int en=n-1;
		bool check=true;
		while(en>be&&check){
			if(k[be]!=k[en]) check=false;
			be++;en--;
		}
		if(check) cout<<"YES";
		else cout<<"NO";
	}

	return 0;
}

