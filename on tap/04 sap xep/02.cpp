#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int bo ;cin>>bo;
	while(bo--){
		int n,x;cin>>n>>x;
		int a[n],b[n];
		bool ok =true;
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=a[i];
			int term=a[i]-x;
			if(term>0) a[i]=term;
			else a[i]=-term;
		}
		for(int i=n-1;i>=0&&ok;i--){
			ok=false;
			for(int j=0;j<i;j++){
				if(a[j]>a[j+1]){
					ok=true;
					swap(b[j],b[j+1]);
					swap(a[j],a[j+1]);

				}
			}
		}
		for(int i=0;i<n;i++){
			cout<<b[i]<<" ";
		}
		cout<<endl;
		

	}
	
	return 0;
}
