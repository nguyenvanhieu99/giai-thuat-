#include<iostream>

using namespace std;
int main(){
	int bo ;cin>>bo;
	while(bo--){
		string s;
		sin>>s;
		int dem[26]={0};	
		int max=0,n=s.size();
		for(int i=0;i<n;i++){
			int term=s[i]-'a';
			dem[term]++;
			if(dem[term]>max) max=dem[term];
		}
		int check=n%2;
		if(!check){
			if(mac<=n/2) cout<<"1"<<endl;
			else cout<<"-1"<<endl;
		}
		else{
			if(max<=(n/2+1)) cout<<"1"<<endl;
			else cout<<"-1"<<endl;
		}

	}



	return 0;
}
