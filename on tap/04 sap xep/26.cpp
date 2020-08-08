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
void interchange_sort(int *a,int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]) swap(a[i],a[j]);
		}
		cout<<"Buoc "<<i+2<<": ";
		out(a,n);
	}
}
int main(){
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	interchange_sort(a,n);
	out();

}
