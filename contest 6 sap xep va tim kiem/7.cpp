#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int bo;cin>>bo;
	while(bo--){
		int n;
		cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=a[i];
		}
		sort(a,a+n);
		int i=0;
		for(i=0;i<n;i++){
			if(a[i]!=b[i]){
				//cout<<b[i]<<" ";
				break;
			}
		}
		int j=n-1;
		for(j=n-1;j>=0;j--){
			if(a[j]!=b[j]){
				//cout<<b[j]<<endl;
				break;
			}
		}
		cout<<i+1<<" "<<j+1<<endl;
	}

	return 0;
}

