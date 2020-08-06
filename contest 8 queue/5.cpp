#include<iostream>
#include<algorithm>
//#include<bits/stdc.h>
#include<queue>
using namespace std;
void xet(int n){
	queue<string> q;
	q.push("1");
	while(n--){
		string s1=q.front();q.pop();
		cout<<s1<<" ";
		string s2=s1;
		q.push(s1.append("0"));
		q.push(s2.append("1"));
	}
}
int main(){
	int bo;cin>>bo;
	while(bo--){
		int n,k;cin>>n;
		xet(n);
		cout<<endl;
	}

	return 0;
}

