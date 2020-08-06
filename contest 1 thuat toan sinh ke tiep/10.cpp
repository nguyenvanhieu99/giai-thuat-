#include<iostream>
#include<cstring>
using namespace std;
char a[15]={0},b[15]={0};

void sinh(){
//	int i=strlen(a);
//	while(a[i]=='1') {
//		a[i]='0';
//		i--;
//	}
//	if(i>=0){
//		a[i]='1';
//	}

	b[0]=a[0];
	for(int i=1;i<strlen(a);i++){
		
		if(a[i]==a[i-1]) b[i]='0';
		else  b[i]='1';
	}
	
}
void out(){
	for(int i=0;i<strlen(a);i++){
		cout<<b[i];
	}
}
int main(){
	int bo ;
	cin>>bo;
	
	while(bo--) {
		cin>>a;
		sinh();
		out();
	}

	return 0;
}

