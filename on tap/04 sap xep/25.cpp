#include<iostream>
#include<algorithm>
//#include<bits/stdc.h>
using namespace std;

int main(){
        int bo;cin>>bo;
        while(bo--){
        int n,k;cin>>n;
                int a[n];
                int term=-1;
                int min=1e7;
                int min2=1e7;
                for(int i=0;i<n;i++){
                        cin>>a[i];
			if(a[i]<=min2){
				if(a[i]<min){
					min2=min;
					min=a[i];
				}
				else min2=min;
			}
		}
		if(min==min2) cout<<"-1"<<endl;
		else cout<<min<<" "<<min2<<endl;
	}
	return 0;
}

