#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;
string hau_tien(string s){
	int n=s.length();
	stack<string>a;
	for(int i=0;i<n;i++){
		if(isupper(s[i])) a.push(string(1,s[i]));
		else{
			string t1=a.top();a.pop();
			string t2=a.top();a.pop();
			string tm="("+t2+s[i]+t1+")";
			a.push(tm);
		}
	}
	return a.top();
}
int main(){
	int bo;cin>>bo;
	while(bo--){
		string s;cin>>s;
		cout<<hau_tien(s)<<endl;
	}
	
	return 0;
}

