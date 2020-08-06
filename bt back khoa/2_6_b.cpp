#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n;cin>>n;
	double tong=0;
	for(int i=1;i<=n;++i){
		tong =tong +i*i;
	}
	double x=sqrt(tong);
	cout<<x;

	return 0;
}

