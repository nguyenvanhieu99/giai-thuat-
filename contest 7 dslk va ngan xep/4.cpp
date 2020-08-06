#include<iostream>
#include<algorithm>
//#include<bits/stdc.h>
#include<stack>
using namespace std;
int kiemtra(string s){
	stack <int > a;
	int n=s.length();
	for(int i=0;i<n;i++){
		char c= s[i];
		if(c=='['||c=='('||c=='{') a.push(c);
		else{
			if(!a.empty()&&c=='}'&&a.top()=='{') a.pop();
			else if(!a.empty()&&c==']'&&a.top()=='[') a.pop();
			else if(!a.empty()&&c==')'&&a.top()=='(') a.pop();
			else  return 0;
			
		}
	}
	return 1;
}
int main(){
	int bo;cin>>bo;
	while(bo--){
		string s;
		cin>>s;
		if(kiemtra(s)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}

	return 0;
}

