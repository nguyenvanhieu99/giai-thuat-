#include<iostream>

using namespace std;
int a[10000];
int n;
void out(int d){
	cout<<"[";
	for(int i=1;i<d;++i){
		cout<<a[i]<<" ";
	}
	cout<<a[d]<<"] ";
};
void trackback(int i){
	int j=1;
	for( j=1;j<=(n-i) ;++j){
		a[j]=a[j]+a[j+1];
	}
	if(i<n){	
		trackback(++i);
		--i;
		out(n-i);
		for( j=n-i;j>=1 ;--j){
			a[j]=a[j]-a[j+1];
	    }
	}       ;;
	
	 
}
int main(){
	int bo;
	cin>>bo;
	while(bo--){
		cin>>n;
		for(int i=1;i<=n;++i){
			cin>>a[i];
			
		}
		
		trackback(1);
		out(n);
		cout<<endl;
		
	}

	return 0;
}

