// tien to sang trung to 
#include<iostream>
#include<algorithm>
//#include<bits/stdc.h>
#include<stack>

using namespace std;
string tt(string s){
	int n=s.length();
	stack<string>a;
	for(int i=n-1;i>=0;i--){
		if(isupper(s[i])) a.push(string(1,s[i]))  ;
		else{
			string t=a.top();a.pop();
			string g=a.top();a.pop();
			string tm="("+t+s[i]+g+")";
			a.push(tm);
		} 
	}
	return a.top();
}
int main(){
	int bo;cin>>bo;
	while(bo--){
		string s;cin>>s;
		cout<<tt(s)<<endl;
	}

	return 0;
}

