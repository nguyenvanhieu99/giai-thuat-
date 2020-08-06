//so dau tien bi lap 
 
#include<iostream>

using namespace std;

int main(){
	int bo;
	cin>>bo;
	while(bo--){
		int n;
		cin>>n;
		long long  a[n];
		long  term =-1;
		bool check=true;
		for(int i=0;i<n;++i){
			cin>>a[i];
		}
		for(int i=0;i<n;++i){
			if(check){
				for(int j=i+1;j<n;++j){
					if(a[i]==a[j]){
						check =false;
						term=a[i];
						break;
					}
				}
			}else break;
		}
		if(term==-1) cout<<"NO"<<endl;
		else cout<<term<<endl;
		check=true;
		
	}

	return 0;
}

