#include<iostream>
#include<algorithm>
//#include<bits/stdc.h>
#include<stack>
using namespace std;
void tinh(int s[],int n){
	stack<int> a;
	int res[100007];
	for(int i=n-1;i>=0;i--){
		while(!a.empty()&&s[i]>=a.top()) 
			a.pop();
		if(!a.empty()) res[i]=a.top();
		else res[i]=-1;
		a.push(s[i]);
	}
	for(int i=0;i<n;i++){
		cout<<res[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int bo;cin>>bo;
	while(bo--){
	int n,k;cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		tinh(a,n);
	}

	return 0;
}

