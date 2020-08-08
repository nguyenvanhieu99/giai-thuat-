#include<iostream>
#include<algorithm>
//#include<bits/stdc.h>
using namespace std;

int main(){
        int bo;cin>>bo;
        while(bo--){
        	int n,k;cin>>n>>k;
                int a[n];
                for(int i=0;i<n;i++){
                        cin>>a[i];
                }
		int *l=upper_bound(a,a+n,k);
		int vt1=-(a-l);
		int *t=lower_bound(a,a+n,k);
		int vt2=-(a-t);
		int term=vt1-vt2;d
		if(term!=0) cout<<term<<endl;
		else cout<<"-1"<<endl;

	}
	return 0;
}
