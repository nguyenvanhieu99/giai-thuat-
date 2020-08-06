#include<iostream>
#include<algorithm>
//#include<bits/stdc.h>
using namespace std;
void out(int *a,int n){
	for(int i=0;i<n-1;i++){
		cout<<a[i]<<" ";
	}
	cout<<a[n-1]<<endl;
}
void insertion_sort(int *a,int n){
	for(int i=0;i<n;i++){
		int term=a[i];
		int j=i-1;
		while(term<a[j]){
			a[j+1]=a[j];
			j--;
			
		}
		a[j+1]=term;
			cout<<"Buoc "<<i<<": ";
		out(a,i+1);
	}
}
int main(){
	//int bo;cin>>bo;
	//while(bo--){
	int n,k;cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		insertion_sort(a,n);
	//}

	return 0;
}

