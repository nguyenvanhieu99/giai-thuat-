//trung to sang hau to 
#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

int uu(char s){
	if(s=='+'||s=='-') return 1;
	else if(s=='*'||s=='/') return 2;
	if(s=='^') return 3;
	if(s=='(') return 0;
}
void trunghau(string s){
	int n=s.length();
	stack<int> a;
	string res="";
	for(int i=0;i<n;i++){
		if(s[i]=='(') a.push(s[i]);//day ( vao stack 
		else if(isupper(s[i])) res+=s[i]; // neu laf ABC.. thi them vao kq
		else if(s[i]==')'){//neu la ) pop stack cho den khi gap )
			while(!a.empty()&&a.top()!='('){ 
				char te=a.top();a.pop();
				res+=te;
			}
			if(a.top()=='(') a.pop();
			
		}else {// neu la toan tu
			while(!a.empty()&&uu(s[i])<=uu(a.top())){ // xet do uu tien <=
				char te=a.top();a.pop();
				res+=te;
			}
			a.push(s[i]);
		}
		
	}
	// giai phong satck 
	while(!a.empty()&&a.top()!='('){
		char  te = a.top();a.pop();
		res+=te;
	}
	cout<<res<<endl;
}
int main(){
	int bo;cin>>bo;
	cin.ignore();
	while(bo--){
	string s;cin>>s;
	trunghau(s);
		
	}

	return 0;
}

