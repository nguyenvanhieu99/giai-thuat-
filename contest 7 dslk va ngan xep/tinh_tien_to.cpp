//BAI 17
#include<iostream>
#include<algorithm>
#include<stack>
#include<cmath>
using namespace std;
int toantu(int a,int b,char s){
	int res=0;
	if(s=='+') return a+b;
	else if(s=='-') return a-b;
	else if(s=='*') return a*b;
	else if(s=='/') return a/b;
	else if(s=='%') return a%b;
	else if(s=='^') return pow(a,b);
	
}
int tinhtien(string s){
	int n=s.length();
	stack<int>a;
	for(int i=n-1;i>=0;i--){
		if(isdigit(s[i])){
			int b=s[i]-'0';
			a.push(b);
		}
		else{
			int t1=a.top();a.pop();
			int t2=a.top();a.pop();
			a.push(toantu(t1,t2,s[i]));
		}
	}
	return a.top();
}
int main(){
	int bo;cin>>bo;
	while(bo--){
		string s;cin>>s;
		cout<<tinhtien(s)<<endl;
	}

	return 0;
}

