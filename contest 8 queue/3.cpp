#include<iostream>
#include<algorithm>
//#include<bits/stdc.h>
#include<deque>
using namespace std;

int main(){
	int bo;cin>>bo;
	string s;
	deque<int > a;
	while(bo--){
		cin>>s;
		if(s=="PUSHFRONT"){
			int x;cin>>x;
			a.push_front(x);
		}else if(s=="PRINTFRONT"){
			if(a.empty()) cout<<"NONE"<<endl;
			else
			cout<<a.front()<<endl;
		}
		else if(s=="POPFRONT"){
			if(a.empty()) ;
			else a.pop_front();
		}
		else if(s=="PUSHBACK"){
			int x;cin>>x;
			a.push_back(x);
		}
		else if(s=="PRINTBACK"){
			if(a.empty()) cout<<"NONE"<<endl;
			else cout<<a.back()<<endl;
		}
		else if(s=="POPBACK"){
			if(a.empty()); 
			else a.pop_back();
		}
	}

	return 0;
}

