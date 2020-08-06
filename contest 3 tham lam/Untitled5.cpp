#include<iostream>

using namespace std;
long long a[2][2],res[2][2];
int main(){
	int bo;
	cin>>bo;
	a[0][0]=1;
	a[0][1]=1;
	a[1][0]=1;
	a[1][1]=0;
	while(bo--){
		cin>>n;
		for(int i=0;i<n;++i){
		res[0][0]=a[0][0]+a[0][1];
			a[0][1]=1;
			a[1][0]=1;
			a[1][1]=0;
		}
	}

	return 0;
}

