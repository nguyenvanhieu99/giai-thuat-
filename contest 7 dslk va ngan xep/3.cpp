#include<iostream>
#include<algorithm>
#include<stack>

using namespace std;

int main(){
	int bo;cin>>bo;
	cin.ignore();
	while(bo--){
		string s="";
		stack <char> a;
		
		//cin.clear();
		//cin.ignore();
		//fflush(stdin);
		getline(cin,s);
		
		int n=s.length();
		for(int i=0;i<n;i++){
			//cout<<s[i]<<" "<<endl;
			if(s[i]!=' '){
				a.push(s[i]);
				
			}
			else if(s[i]==' '&&i!=(n-1)){
				while(!a.empty()){
					cout<<a.top();a.pop();
				}
				cout<<" ";
			}
			if(i==(n-1)){
					while(!a.empty()){
					cout<<a.top();a.pop();
					}
			}
		}
		cout<<endl;
	}

	return 0;
}

