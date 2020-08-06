//so tang dam  
#include<iostream>
#include<cstring>
using namespace std;
int tang(char s[]){
	for(int i=1;i<strlen(s)-1;i++){
		if(s[i]>s[i-1]) return 0;
	}
	return 1;
}
int giam(char s[]){
	for(int i=1;i<strlen(s)-1;i++){
		if(s[i]<s[i-1]) return 0;
	}
	return 1;
}
int check(char s[]){
	if(tang(s)||giam(s)) return 1;
	else return 0;
}
int main(){
	int bo;
	cin>>bo;
	char s[600];
	
	while(bo--){
		int i=0;
		int term;
		
		cin>>s;
			
			term=check(s);
			
		if(term) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}

	return 0;
}

