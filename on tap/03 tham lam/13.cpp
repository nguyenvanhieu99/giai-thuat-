#include<iostream>
using namespace std;

int main(){
	int bo;cin>>bo;
	while(bo--)	{
		int d;cin>>d;
		string s;
		cin>>s;
		int n=s.size(), max=0,check=n/d;
		int dem[500]={0};
		bool ok =false;
		for(int i=0;i<n;i++){
			int term =s[i]-'a';
			dem[term]++;
			if(dem[term]>max) max=dem[term];
			if(max<check) ;
			else{
				cout<<"-1"<<endl;
				break;
				ok=true;
			}
		}
		if (!ok){
			cout<<"1"<<endl;
		}

	}
	
	return 0;
}
