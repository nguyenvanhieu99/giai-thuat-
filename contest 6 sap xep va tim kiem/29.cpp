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
void bubble_sort(int *a,int n){
	bool ok=true;
	int dem=1;
	for(int i=n-1;i>=0&&ok;i--){
		int term=i;
		ok=false;
		for(int j=0;j<i;j++){
			
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
				ok=true;
			}
		}
		if(ok==false);
		else{
		cout<<"Buoc "<<dem++<<": ";
		out(a,n);
		}
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
		bubble_sort(a,n);
	//}

	return 0;
}

