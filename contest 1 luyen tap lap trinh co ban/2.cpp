#include<iostream>

using namespace std;
string s;
int main(){
	int bo;
	cin>>bo;
	while(bo--){
		cin>>s;
		if(s[0]==s[s.length()-1]) cout<<"YES";
		else cout<<"NO";
	}

	return 0;
}

