#include<iostream>
#include<algorithm>
#include<string.h>
//#include<bits/stdc.h>
using namespace std;
int check[1000000]={0};
bool com(int a,int b){
	if(check[a]<check[b]){
		return 0;
	}
	else if(check[a]>check[b]){
		return 1;
	}
	else{
		return a<b;
	}
}
int main(){
	int bo;cin>>bo;
	while(bo--){
		int n;cin>>n;
		int a[n];
		memset(check,0,1000000);
		for(int i=0;i<n;i++){
			cin>>a[i];
			check[a[i]]++;
		}
		sort(a,a+n,com);
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<a[n-1]<<endl;
	
	}
	return 0;
}
