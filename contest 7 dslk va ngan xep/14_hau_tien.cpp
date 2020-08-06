#include<iostream>
#include<algorithm>
//#include<bits/stdc.h>
#include<stack>
using namespace std;
string ht(string s){
	int n=s.length();
	stack<string> a;
	for(int i=0;i<n;i++){
		if(isupper(s[i])) a.push(string(1,s[i]));
		else{
			string g=a.top();a.pop();
			string t=a.top();a.pop();
			string tm=s[i]+t+g;
			a.push(tm);
		}
	}
	return a.top();
}
int main(){
	int bo;cin>>bo;
	while(bo--){
		string s;cin>>s;
		cout<<ht(s)<<endl;
	}

	return 0;
}

