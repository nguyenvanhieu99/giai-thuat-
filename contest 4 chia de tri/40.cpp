#include<iostream>

using namespace std;

int main(){
	int bo;
	cin>>bo;
	while(bo--){
		int n;cin>>n;
		int a[10000]={0};
		int tong=0;
		for(int i=0;i<n;++i){
			cin>>a[i];
			tong+=a[i];
		}
		cout<<n-tong<<endl;
	}

	return 0;
}

