#include<iostream>

using namespace std;
int bo,stt,k;
string  s;
bool ok=false;
void next(){
	int j=s.length()-2;
	while(j>0&&s[j]>=s[j+1]) j--;
	if(j>0){
		int k=s.length()-1;
		while(s[j]>s[k])k--;
		swap(s[j],s[k]);
		int r=j+1,t=s.length()-1;
		while(r<t){
			swap(s[r],s[t]);
			r++,t--;
		}
	}else ok=true;
}
int main(){
	cin>>bo;
	while(bo--){
		cin>>stt>>s;
		next();
		if(ok) cout<<"BIGGEST";
		else cout<<s<<"\n";
	}

	return 0;
}

