#include<iostream>

using namespace std;
int tinh(string s){
	int f[50],n=s.length();
	if(s[0]=='0' ) retutn 0;
	f[0]=1;f[1]=1;
	for(int i=2;i<=n;i++){
		if(s[i-1]!='0') f[i]=f[i-1];
		if(s[i-2]=='1'||s[i-2]=='2'&&s[i-1]<'7')
		f[i]=f[i]+f[i-2];
	}
	return f[n];
}
int main(){
	int t;string s;
	cin>>t;
	while(t--){
		cin>>s;
		cout<<tinh(s)<<endl;
	}

	return 0;
}

