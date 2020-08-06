#include<bits/stdc++.h>
using namespace std;
bool ok=true;
int n,k,t;
string s;
void sinh(){
	int n=s.size();
	int i=s.size()-2;
	while(i>=0&&s[i]>=s[i+1]) i--;
	if(i>=0){
		int j=n-1;
		while(s[i]>=s[j]) j--;
		swap(s[i],s[j]);
		int l=i+1,r=n-1;
		while(l<r){
			swap(s[r],s[l]);
			r--;l++;
		}
	}
	else ok =false;
}

int main(){
	int bo;cin>>bo;
	while(bo--){
		cin>>t>>s;
		//cout<<"+"<<s.size()<<"+"<<endl;
		sinh();
		cout<<t<<" ";
		if(ok) cout<<s<<endl;
		else cout<<"BIGGEST"<<endl;
		ok=true;
	}

	return 0;
}

