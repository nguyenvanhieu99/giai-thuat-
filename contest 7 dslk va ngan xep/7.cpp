#include<iostream>
#include<algorithm>
//#include<bits/stdc.h>
#include<stack>

using namespace std;
int tinh(string s){
	stack<int> a;
	int n=s.length();
	int dem=0,d=0;
	for(int i=0;i<n;i++){
		if(s[i]=='(') a.push('(');
		else{
			if(!a.empty()){
				a.pop();dem+=2;
			}else{
				a.push(')');
				d++;
			}
		}
	}
//	return (n-dem)/2;

	return d+a.size()/2;
}
int main(){
	int bo;cin>>bo;
	while(bo--){
		string s;
		cin>>s;
		cout<<tinh(s)<<endl;
		
	}
	

	return 0;
}

