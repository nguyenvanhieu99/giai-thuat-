
#include<bits/stdc++.h>

using namespace std;

	void show(stack <int > s){
//		int n=s.size();
//		for(int i=0;i<n-1;i++){
//			int term=s.top();s.pop();
//			cout<<term<<" ";
//		}
//		cout<<s.top();
//		cout<<"so phan tu la:"<<n<<endl;
//		while(!s.empty()){
//			int ter=s.top();s.pop();
//			cout<<ter<<" ";
//		}

		if(!s.empty()){
			int ter=s.top();s.pop();
			show(s);
			cout<<ter<<" ";
		}
	}
int main(){
	string s;
	stack <int> a;
	while(cin>>s){
		//cout<<"++"<<s<<"    "<<endl;
		if(s=="push"){
			int t;cin>>t;
			a.push(t);
		}else if(s=="pop"){
			if(!a.empty()) a.pop() ;
		}else if(s=="show"){
			if(a.empty()) cout<<"empty";
			else show(a);
			cout<<endl;
		}
	}

	return 0;
}

