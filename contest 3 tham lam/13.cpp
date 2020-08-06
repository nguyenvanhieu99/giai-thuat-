#include<iostream>

using namespace std;

int main(){
	int bo;cin>>bo;
	while(bo--){
		string s;
		int d;cin>>d;
		cin>>s;
		int  n=s.size();
		int dem[500]={0};
		int max=0;
			int check=n/d;
			bool ok=false;
		for( int i=0;i<n;++i){
			int term=s[i]-'a';
			dem[term]++;
			
			if(dem[term]>max&&max<check) max=dem[term];
			else {
				cout<<"1"<<endl;
				break;
				ok=true;
			}
		}
	
		if(!ok){
			cout<<"-1"<<endl;
		}
		
	}

	return 0;
}

