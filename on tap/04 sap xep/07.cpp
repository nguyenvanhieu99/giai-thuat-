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
		int i=0,j=n-1;
		for( i=0;i<n;i++) if(a[i]!=b[i]) break;
		for(j=n-1;i>=0;j--) if(a[j]!=b[j]) break;
		cout<<i<<" "<<j<<endl;
	}	
	return 0;
}
