#include<iostream>
#include<algorithm>
//#include<bits/stdc++.h>
#include<stack>
using namespace std;
char *chuan(string s){
	int n=s.length();
	int ind=0;
	char *t=new char(n);
	stack <int>a;
	a.push(0);
	 for(int i=0;i<n;i++){
	 	if(s[i]=='+'){
	 		if(a.top()==1) t[ind++]='-';
	 		if(a.top()==0) t[ind++]='+';
		 }
		 else if(s[i]=='-'){
		 	if(a.top()== 1 ) t[ind++]='+';
	 		if(a.top()== 0 ) t[ind++]='-';
		 }
		 else if(s[i]=='('&&i>0){
		 	if(s[i-1]=='-'){
		 		int x=(a.top()==1)?0:1;
		 		a.push(x);
			 }
			 else if(s[i-1]=='+') a.push(a.top());
		 }
		 else if(s[i]==')'){
		 	a.pop();
		 }
		 else t[ind++]=s[i];
	 }
	 return t;
}

int main(){
	int bo;cin>>bo;
	string s;
	cin.ignore();
	while(bo--){
	getline(cin,s);
	cout<<chuan(s)<<endl;
	
	}

	return 0;
}

