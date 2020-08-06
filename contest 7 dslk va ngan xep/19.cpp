#include<iostream>
#include<algorithm>
//#include<bits/stdc.h>
#include<stack>

using namespace std;

int main(){
	string s;
	int bo;cin>>bo;
	while(bo--){
		cin>>s;
		int n=s.length();
		stack<int> a;
		for(int i=0;i<=n;i++){
			if(s[i]=='I'||i==n){
				cout<<i+1;
				while(!a.empty()){
				  cout<<a.top();a.pop();
				}
			}
			else if(s[i]=='D') a.push(i+1);
		}
		cout<<endl;	
	}

	return 0;
}

