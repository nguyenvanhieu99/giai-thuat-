#include<iostream>
#include<string>

using namespace std;

int main(){
	int k;
	string a,b,res="";
	cin>>k>>a>>b;
	//cout<<atoi(a);
	while(a.size()>b.size()){
		b='0'+b;
	}
	while(a.size()<b.size()){
		a='0'+a;
	}
	int term=0;
	for(int i=a.length()-1;i>=0;i--){
//		cout<<stoi(a[i])<<endl;
		int ta=int(a[i]-'0')+int(b[i]-'0')+term;
		//cout<<ta<<endl;
		res=char(ta%k+'0')+res;
		term=ta/k;
	}
	if(term!=0) res=char(term+'0')+res;
	cout<<res;

	return 0;
}

