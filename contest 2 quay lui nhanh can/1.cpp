#include<iostream>

using namespace std;
long long n;
int a[100000];
void out(int d){
	cout<<"[";
	for(int i=1;i<d;++i){
		cout<<a[i]<<" ";
	}
	cout<<a[d]<<"]";
	cout<<endl;
};
void trackback(int i){
	int j=1;
	//cout<<"[";
	
	for( j=1;j<=(n-i) ;++j){
		a[j]=a[j]+a[j+1];
	//	cout<<j<<" ";
	}
	//cout<<endl;
	
	if(i<n){
		
		trackback(++i);
		for( j=1;j<=(n-i) ;++j){
		a[j]=a[j]-a[j+1];
	//	cout<<j<<" ";
	}
	out(n-i);
		
	} 
	
	 
}
int main(){
	int bo;
	cin>>bo;
	while(bo--){
		cin>>n;
		for(int i=1;i<=n;++i){
			cin>>a[i];
			
		}
		out(n);
		trackback(1);
		
	}

	return 0;
}

