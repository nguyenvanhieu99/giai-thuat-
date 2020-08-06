#include<iostream>

using namespace std;

int main(){
	int bo;cin>>bo;
	while(bo--){
		int n,dem=0;cin>>n;
		int a[n];
		for(int i=0;i<n;++i){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			int t=i;
			for(int j=i+1;j<n;++j){
				if(a[t]>a[j])t=j;
			}
			if(t==i);
			else{
				swap(a[t],a[i]);
				dem++;
			}
		}
		cout<<dem<<endl;
	}

	return 0;
}

