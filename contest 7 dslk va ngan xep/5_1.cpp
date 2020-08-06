#include<iostream>
#include<algorithm>
//#include<bits/stdc.h>
#include<stack>
using namespace std;
int tinh(string s){
	int n=s.length(),kq=0,i=0,dem=0,term=0;
	stack<int>	a;
	a.push(-1);
	for(i=0;i<n;i++){
		//cout<<s[i]<<endl;
		if(s[i]=='(') {
		//	cout<<i<<"*"<<endl;
			a.push(i);
			//kq=max(kq,term);
			//term=0;
		}
		else {
			a.pop();
			if(!a.empty()){
				int t=a.top();
				kq=max(kq,i-t);
			}
			else a.push(i);
		}
	}
	return kq;
	
}
int main(){
	int bo;cin>>bo;
	
	while(bo--){
		string s;
		cin>>s;
		//cin.ignore();
		cout<<tinh(s)<<endl;
	}

	return 0;
}

