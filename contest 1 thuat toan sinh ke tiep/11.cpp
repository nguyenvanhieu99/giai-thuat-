#include<iostream>
#include<cstring>
using namespace std;
char a[15],b[15];
void sinh(){
	b[0]=a[0];
	for(int i=1;i<strlen(a);++i){
		if(a[i]=='0') b[i]=b[i-1];
		else {
			if(b[i-1]=='0')b[i]='1';
			else b[i]='0'; 
		}
	}
}
void out(){
	for(int i=0;i<strlen(a);i++){
		cout<<b[i];
	}
}
int main(){
	int bo;
	cin>>bo;
	while(bo--){
		cin>>a;
		sinh();
		out();
		cout<<endl;
	}

	return 0;
}

