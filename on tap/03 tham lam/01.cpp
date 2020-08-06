#include<iostream>
using namespace std;

int main(){
	int bo;cin>>bo;
	int a[10]={1,2,5,10,20,50,100,200,500,1000};
	while(bo--){
		int dem=0;
		int x;
		cin>>x;
		int i=9;
		while(x>0){
			if(x<a[i]){
				i--;
			}
			else if(x>=a[i]){
				x=x-a[i];
				dem++;
				
			}
		}
		cout<<dem<<endl;
	}
	return 0;
}
