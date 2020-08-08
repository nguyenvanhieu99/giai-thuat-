#include<iostream>
#include<algorithm>
//#include<bits/stdc.h>

using namespace std;
int k;
void out(int *a,int n){
        for(int i=0;i<n-1;i++){
                cout<<a[i]<<" ";
        }
        cout<<a[n-1]<<endl;
}
int partition(int *a,int l,int r){
	int x=a[r];
	int i=l-1;
	for(int j=l;j<r;j++){
		if(a[j]<x){
			i++;
			swap(a[i],a[j]);
		}
	}
	swap(a[i+1],a[r]);
	return i+1;
}

void quicksort(int *a,int l,int r){
	if(l<r){
		int p=partition(a,l,r);
		quicksort(a,l,p-1);
		quicksort(a,p+1,r);
	}
}
int main(){
        int bo;cin>>bo;
        while(bo--){
        	int n,k;cin>>n;
        	k=n;
                int a[n];
                for(int i=0;i<n;i++){
                        cin>>a[i];
                }
		quicksort(a,0,n-1);
		out(a,n);
		
	}

	return 0;
}
