#include<iostream>
#include<algorithm>
//#include<bits/stdc.h>
#include<stack>
using namespace std;

void nhor(int s[],int n){
	stack<int> a;
	int res[100007];
	for(int i=n-1;i>=0;i--){
		while(!a.empty()&&s[i]<=a.top()) 
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
void lonr(int s[],int n){
	stack<int> a;
	stack<int>b;
	int res[100007];
	for(int i=n-1;i>=0;i--){
		while(!a.empty()&&s[i]>=s[a.top()]) 
			a.pop();
		if(!a.empty()) res[i]=a.top();
		else res[i]=-1;
		a.push(i);
	}
	int r[100007]={0};
	for(int i=n-1;i>=0;i--){
		while(!b.empty()&&s[i]<=b.top()) 
			b.pop();
		if(!b.empty()) r[i]=b.top();
		else r[i]=-1;
		b.push(s[i]);
	}
	for(int i=0;i<n;i++){
		if(res[i]==-1) cout<<-1<<" ";
		else 
		cout<<r[res[i]]<<" ";
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
		lonr(a,n);
	}

	return 0;
}

