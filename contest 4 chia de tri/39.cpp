#include<iostream>
#include<vector>
using namespace std;

//long long a[1000000]={0},b[1000000]={0};
int main(){
	int bo;cin>>bo;
	
	while(bo--){
		vector  <long long >	a;
		vector <long long >	b;
		long long k;
		int n;cin>>n;
		for(int i=0;i<n;++i){
			
			cin>>k;
			a.push_back(k);
		}
		int i=0;
		int ok=n-1;
		bool check=false;
		for( i=0;i<n-1;++i){
			cin>>k;
			if(a[i]!=k && !check){
				ok=i;
				check=true;
			}
			
			a.push_back(k);
			
		}
		
		cout<<ok+1<<endl;	
		
		
	}

	return 0;
}

