#include<iostream>

using namespace std;

int main(){
	int bo;cin>>bo;
	while(bo--){
		int n,a,b,c;cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			int term;cin>>term;
			if(term==0) a++;
			else if (term==1) b++;
			else c++;
		}
		int i=0;
		for(i=0;i<a;i++) a[i]=0;
		for(int j=0;j<b;j++){
			a[i]=1;
			i++;
		}
		for(int i=0;j<c;j++){
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
