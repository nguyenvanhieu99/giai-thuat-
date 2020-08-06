#include<iostream>

using namespace std;

int main(){
	int a[11]={1,2,5,10,20,20,50,100,200,500,1000};
	int bo;cin>>bo;
	while(bo--){
		int n;cin>>n;
		int dem=0;
		for(int i=10;i>=0;i--){
			while(a[i]<=n){
				n=n-a[i];
				dem++;
			}
		}
		cout<<dem<<endl;
	}
	
	

	return 0;
}

