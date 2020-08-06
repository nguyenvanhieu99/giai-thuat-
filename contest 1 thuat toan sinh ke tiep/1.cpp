#include<iostream>
#include<cstring>
using namespace std;
char s[1000];
void sinh(){
	for(int i=strlen(s)-1;i>=0;i--){
		if(s[i]=='0'){
			s[i]='1';
			break;
		}else s[i]='0';
	}
}
void out()	{
	cout<<s<<endl;
}
int main(){
	int bo;
	cin>>bo;
	
	while(bo--){
		cin>>s;
		sinh();
		out();
	}

	return 0;
}

