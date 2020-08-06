#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
string ketiep(string s){
	int n=s.size();
	for(int i=n-1;i>=0;i--){
		if(s[i]=='0'){
			s[i]='1';
			break;
		}
		else{
			s[i]='0';
		}
	}
	return s;
}
int main(){
	int bo;cin>>bo;
	while(bo--){
		string s;cin>>s;
		s=ketiep(s);
		cout<<s<<endl;
	}
	
	return 0;
}

