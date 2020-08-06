#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n;cin>>n;
	int tong=0;
	for(int i=1;i<=n;++i){
		tong+=i;
	}
	int x=(tong/n);
	cout<<x;

	return 0;
}

