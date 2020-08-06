#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;
string hautien(string s){
	int n=s.length();
	stack<string>a;
	for(int i=n-1;i>=0;i--){
		if(isupper(s[i])) a.push(string(1,s[i]));
		else{
			string e=a.top();a.pop();
			string f=a.top();a.pop();
			string tm=e+f+s[i];
			a.push(tm);
		}
		
	}
	return a.top();
}
int main(){
	int bo;cin>>bo;
	while(bo--){
		string s;cin>>s;
		cout<<hautien(s)<<endl;
	}

	return 0;
}

