#include<iostream>
#include<algorithm>
//#include<bits/stdc.h>
#include<stack>
#include<cmath>

using namespace std;
int uu(char s){
	if(s=='+'||s=='-') return 1;
	else if(s=='*'||s=='/') return 2;
	else if(s=='^') return 3;
	//if(s=='(') return 4;
	return 0;
}
long long  xl(int a,int b,char op){
	switch(op){ 
        case '+': return a + b; 
        case '-': return b-a; 
        case '*': return a * b; 
        case '/': return b / a;
		case '^': return pow(a,b); 
    } 
}
long long tinh(string s){
	int n=s.length();
	stack<long long > va;
	stack<char> op;
	for(int i=0;i<n;i++){
		if(s[i]==' ') continue;
		
		if(s[i]=='(') op.push(s[i]);
		else if(isdigit(s[i])){
			
			long long val=0;
			while(i<n&&isdigit(s[i])){
				int term=s[i]-'0';
				val= val*10 + term;
				i++;
			}
			va.push(val);
			if(!isdigit(s[i])) i--;
		}
		else if(s[i]==')'){
			while(!op.empty()&&op.top()!='('){
				long long t1=va.top();va.pop();
				long long t2=va.top();va.pop();
						
				long long tm=xl(t1,t2,op.top());
				va.push(tm);op.pop();
			}
			if(!op.empty()) op.pop();
		}
		else{
			while(!op.empty()&&uu(s[i])<=uu(op.top())){
				long long t1=va.top();va.pop();
				long long t2=va.top();va.pop();		
				long long tm=xl(t1,t2,op.top());
				va.push(tm);op.pop();
			}
			op.push(s[i]);
		}
	}
	while(!op.empty()){
 			long long t1=va.top();va.pop();
			long long t2=va.top();va.pop();		
			long long tm=xl(t1,t2,op.top());
			va.push(tm);op.pop();
	}
	return va.top();
}
int main(){
	int bo;cin>>bo;
	cin.ignore();
	while(bo--){
		string s;
		getline(cin,s);
		cout<<tinh(s)<<endl;
	}

	return 0;
}

