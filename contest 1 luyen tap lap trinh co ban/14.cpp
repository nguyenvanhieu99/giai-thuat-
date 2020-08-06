//bai 14 :sap xep theo so lan xuat hien

#include<iostream>

using namespace std;
int a[100000],n;
int x[100000]={0},dem=0,b[100000]={0};

int main(){
	int bo;
	cin>>bo;
	while(bo--){
		int dem=0;
		cin>>n;
		for(int i=0;i<n;++i){
			int term;
			cin>>term;
			if(x[term]>0) x[term]++;
			else{
				x[term]=1;
				a[dem]=term;
				dem++;
			}
			
		}
		for(int i=0;i<dem;++i){
			for(int j=0;j<dem;++j){
			if(x[a[i]]>x[a[j]]) swap(a[i],a[j]);
			
			}
		}
		for(int i=0;i<dem;++i){
			for(int j=0;j<x[a[i]];++j){
				cout<<a[i]<<" ";
			
			}
		}
		cout<<endl;
	}

	return 0;
}

