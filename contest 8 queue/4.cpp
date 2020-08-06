#include<iostream>
#include<algorithm>
//#include<bits/stdc.h>
#include<queue>
using namespace std;

int main(){	
	int bo;cin>>bo;
	string s;
	while(bo--){
	int k;
	priority_queue<long long > w;
	int a[100]={0};
	long long res=0;
	cin>>k;
	cin>>s;
	int n=s.length();
	for(int i=0;i<n;i++){
		a[s[i]-65]++;
	}
	for(int i=0;i<50;i++){
		 if(a[i]!=0){
		 	//long long term=a[i]*a[i];
		 	//cout<<"*"<<term<<"*"<<endl;
			w.push(a[i]);
		 }
		 
	}
	while(k--&&!w.empty()){
		long long r=w.top();
		w.pop();
		r--;w.push(r);
	}
	while(!w.empty()){
		
		long long term=w.top();w.pop();
		long  long o=term*term;
		//cout<<"*"<<term<<"*"<<endl;
		res+=o;
	}
	cout<<res<<endl;
		
	}

	return 0;
}

