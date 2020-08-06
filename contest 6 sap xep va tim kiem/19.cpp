#include<iostream>
#include<algorithm>
//#include<bits/stdc.h>
using namespace std;

int main(){
	int bo;cin>>bo;
	while(bo--){
	int n,k;cin>>n;
		bool check[100000]={false};
		cin>>k;
		check[k]=true;
		int max=k;
		int min=k;
		for(int i=1;i<n;i++){
			int term;
			cin>>term;
			if(term>max) max=term;
			if(term<min)min=term;
			check[term]=true;
			
		}
		int dem=0;
		for(int i=min;i<max;i++){
			if(check[i]==false) {
				//cout<<"*"<<i<<"*"<<endl;
				dem++;
			}
		}
		cout<<dem<<endl;
		
	}

	return 0;
}

