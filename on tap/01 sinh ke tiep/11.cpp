
#include<bits/stdc++.h>
using namespace std;
int b[1000],n,k;
string a;
void out(){ 
	for(int i=0;i<n;i++){
		cout<<b[i];
	}
	cout<<endl;
}
void sinh(){
	b[0]=a[0]-'0';
	for(int j=1;j<n;j++){
//		b[j]=(a[j]-'0')^b[j-1];
	if(a[j]=='0') b[j]=b[j-1];
	else{
		if(b[j-1]==0) b[j]=1;
		else b[j]=0;
	}
	}
}
int main(){
	int bo;cin>>bo;
	while(bo--){
		cin>>a;
		n=a.size();
		sinh();
		out();
	}

	return 0;
}

