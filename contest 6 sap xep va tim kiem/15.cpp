#include<iostream>
#include<algorithm>
//#include<bits/stdc.h>
using namespace std;
void merge(int *a,int l,int m,int r){
	int n1=m-l+1;
	int n2=r-m;
	int x[n1],y[n2];
	for(int i=0;i<n1;i++){
		x[i]=a[l+i];
	}
	for(int i=0;i<n2;i++){
		y[i]=a[m+i+1];
	}
	int i=0,j=0,k=l;
	while(i<n1&&j<n2){
		if(x[i]>y[j]){
			a[k]=y[j];
			j++;
		}
		else if(x[i]<=y[j]){
			a[k]=x[i];
			i++;
		}
		k++;
	}
	while(i<n1){
		a[k]=x[i];
		k++;
		i++;
	}
	while(j<n2){
		a[k]=y[j];
		k++;
		j++;
	}
	
	
}
void mergesort(int *a,int left,int right){
	int mid;
	if(left<right){
		mid=(right+left)/2;
		mergesort(a,mid+1,right);
		mergesort(a,left,mid);
		merge(a,left,mid ,right);
	}
}
int main(){
	int bo;cin>>bo;
	while(bo--){
	int n,k;cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		mergesort(a,0,n-1);
		for(int i=0;i<n-1;i++){
			cout<<a[i]<<" ";
		}
		cout<<a[n-1]<<endl;
	}

	return 0;
}

