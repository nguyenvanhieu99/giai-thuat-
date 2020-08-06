#include<iostream>

using namespace std;

int main(){
	int n;cin>>n;
	int a[n],b[n];
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	for(int i=1;i<=n;++i){
		b[i]=0;
		for(int j=1;j<i;++j){
			if(a[i]>a[j]) b[i]=max(b[j]+1,b[i]);
		}
	}
	int res=b[1];
	for(int i=1;i<=n;++i){
		if(res<b[i]) res=b[i];
	}
	cout<<res+1;
	
	return 0;
}

