#include<iostream>
#include<algorithm>
//#include<bits/stdc.h>
#include<queue>
#include<sstream>
using namespace std;
void xet(int n){
	queue<string> q;
	q.push("9");
	while(true){
		string s1=q.front();q.pop();
		stringstream geek(s1);
		int x=0;
		geek>>x;
		
		if(x%n==0){
			cout<<x<<endl;
			break;
		}
		string s2=s1;
		q.push(s1.append("0"));
		q.push(s2.append("9"));
	}
}
int main(){
	int bo;cin>>bo;
	while(bo--){s
		int n,k;cin>>n;
		xet(n);
	}

	return 0;
}

