#include<iostream>
#include<algorithm>
//#include<bits/stdc.h>
using namespace std;




void merge(long long  *a,long long l,long long  m,long long  r){
	long long  n1=m-l+1;
	long long n2=r-m;
	long long x[n1],y[n2];
	for(long long i=0;i<n1;i++){
		x[i]=a[l+i];
	}
	for(long long  i=0;i<n2;i++){
		y[i]=a[m+i+1];
	}
	long long i=0,j=0,k=l;
	while(i<n1&&j<n2){
		if(x[i]<y[j]){
			a[k]=x[i];
			i++;
		}
	   else	if(x[i]>=y[j]){
			a[k]=y[j];
			j++;
		}
		k++;
	}
	while(i<n1){
		a[k]=x[i];
		i++;
		k++;
	}
	while(j<n2){
		a[k]=y[j];
		j++;
		k++;
	}
	
}
void merge_sort(long long *a,long long  l,long long r){
	long long  mid ;
	if(l<r){
		mid = (l+r)/2;
		merge_sort(a,mid+1,r);
		merge_sort(a,l,mid);
		merge(a,l,mid ,r);
	}
}
void out(long long *a,long long n){
	for(long long i=0;i<n-1;i++){
		cout<<a[i]<<" ";
		
	}
	cout<<a[n-1]<<endl;
}
int main(){
	long long  n,k;cin>>n;
		long long  a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
	merge_sort(a,0,n-1)	;
	out(a,n);
	
	
	return 0;
}

