#include<iostream>
#include<algorithm>
//#include<bits/stdc.h>
using namespace std;

int  check(int *a,int k,int n){
	int l=0;
	int r=n-1;
	while(l<=r){
		int mid =(r+l)/2
		if(a[mid]==k){
			return 1;		
		}
		else if (a[mid]<k){
			l=mid+1;
		}
		else{
			sr=mid-1;
		}
	}
}
int main(){
        int bo;cin>>bo;
        while(bo--){
        int n,k;cin>>n>>k;
                int a[n];
                for(int i=0;i<n;i++){
                        cin>>a[i];
                }
		int vt=check(a,k,n);
		if(vt==0) cout<<"-1"<<endl;
		else cout<<"1"<<endl;
	}

	return 0;
}
