#include<iostream>
using namespace std;
int main(){
	int bo=10;
	while(bo--){
		int n;cin>>n;
		int count=0;
		bool ok=false;
		for(int i=2;i<n;i++){
			if(n%i==0) ok=true;
			
		}
		if(ok) cout<<"khong phai nt";
	}
	return 0;
}

