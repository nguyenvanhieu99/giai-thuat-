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
void selection_sort(int *a,int n){
	for(int i=0;i<n-1;i++){
		int term=i;
		for(int j=i;j<n;j++){
			
			if(a[term]>a[j]) term=j;
		}
		swap(a[i],a[term]);
			cout<<"Buoc "<<i+1<<": ";
		out(a,n);
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
		selection_sort(a,n);
	//}

	return 0;
}

