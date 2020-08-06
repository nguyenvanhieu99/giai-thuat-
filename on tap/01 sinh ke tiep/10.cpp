
#include<bits/stdc++.h>
using namespace std;
bool ok=true;
int b[1000],n,k;
string a;
void out(){
	for(int i=0;i<n;i++){
		cout<<b[i];
	}
	cout<<endl;
}
void sinh(){
	n=a.size();
//	int i=n;
//	while(i>0 && a[i]=='1'){
//		a[i]='0';
//		i--;
//	}
//	if(i>0){
//		a[i]='1';
//	}
//	else {
//		ok=false;
//	}
	b[0]=a[0]-'0';
	for(int j=1;j<n;j++){
		b[j]=a[j]^a[j-1];
	}
}
int main(){
	int bo;cin>>bo;
	while(bo--){
		cin>>a;
		sinh();
		out();
		ok=true;
	}

	return 0;
}

