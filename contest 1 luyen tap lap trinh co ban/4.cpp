#include<iostream>

using namespace std;

int main(){
	int test=0;
	int bo;cin>>bo;
	while(bo--){
		cin>>n;
		int i=2;
		test++;
		cout<<"Test "<<test<<": ";
		while(i<=n){
			if(n%i==0){
				int term=0;
			while(n%i==0){
				term++;
				n=n/i;
			}
			cout<<i<<"("<<term<<")"<<" ";	
			}
			i++;
		}
	} 

	return 0;
}

