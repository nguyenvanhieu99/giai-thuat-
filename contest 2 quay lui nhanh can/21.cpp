//bai 21:quay lui hoan vi xau


#include<iostream>
#include<cstring>
using namespace std;
char s[20];
int a[20]={0},n;
bool chuaxet[20]={false};
void out(){
	for(int i=1;i<=n;i++){
		cout<<s[a[i]-1];
	}
	cout<<" ";
}
void trackback(int i){
	for(int j=1;j<=n;++j){
		if(!chuaxet[j]){
			a[i]=j;
			chuaxet[j]=true;
			if(i==n) out();
			else trackback(i+1);
			chuaxet[j]=false;
		}
		
	}
}
int main(){
	int bo;
	cin>>bo ;
	while(bo--){
	cin>>s;
	n=strlen(s);
	
	trackback(1);
	cout<<endl;
	}
	return 0;
	
}

