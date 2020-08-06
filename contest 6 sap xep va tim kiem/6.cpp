#include<iostream>

using namespace std;

int main(){
	int bo;cin>>bo;
	while(bo--){
		int n,a0=0,a1=0,a2=0;cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			int term;cin>>term;
			if(term==0){
				a0++;
			}
			else if(term==1){
				a1++;
			}
			else{
				a2++;
			}
		}
		int i=0;
		for(i=0;i<a0;i++){
			a[i]=0;
		};
		for(int j=0;j<a1;j++){
			a[i]=1;
			i++;
		}
		for(int j=0;j<a2;j++){
			a[i]=2;
			i++;
		}
		for(int j=0;j<i-1;j++){
			cout<<a[j]<<" ";
		}
		cout<<a[i-1]<<endl;
		
		
	}

	return 0;
}

