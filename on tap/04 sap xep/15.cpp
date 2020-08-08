#include<iostream>
#include<algorithm>

using namespace std;

void merge(int *a,int l,int mi,int r){
	int n=mi-l+1;
	int m=r-mid;
	int x[n],y[m];
	for(int i=0;i<n;i++){
		x[i]=a[l+i];
	}
	for(int i=0;i<m;i++){
		y[i]=a[m+i+i];
	}
	int i=0,j=0,t=0;
	while(i<n&&j<m){
		if(x[i]>y[j]){
			a[k]=y[i];
			j++;k++;
		}
		else if(x[i]<=y[j]){
			a[k]=x[i];
			i++;k++;
		}
	}
	while(i<n){
		a[k]=x[i];
		k++;i++;
	}
	while(j<m){
		a[k]=y[j];
		k++;j++;
	}
	
}
void mergesort(int *a,int left,int right){
	int mid;
	if(left<right){
		mid=(left+right)/2;
		mergesort(a,mid+1,right);
		mergesort(a,left,mid);
		merge(a,left,mid ,right);
	}
}

int main(){
	int bo ;cin>>bo;
	while(bo--){
		int n;cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		mergesort(a,0,n-1);
		for(int i==0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<a[n-1]>>endl;
	}
	
	return 0;
}
