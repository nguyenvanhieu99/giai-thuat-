
#include<bits/stdc++.h>
using namespace std;

int main(){
	int bo,k;cin>>bo;
	stack<int> s;
	while(bo--){
		string a; cin>>a;
		if(a=="PUSH"){
			cin>>k;
			s.push(k);
		}else if(a=="POP"){
			if(!s.empty()) s.pop();
		}
		else if(a=="PRINT"){
			if(s.empty()) cout<<"NONE"<<endl;
			else {
				cout<<s.top()<<endl;
			}
		}
	
	}

	return 0;
}

