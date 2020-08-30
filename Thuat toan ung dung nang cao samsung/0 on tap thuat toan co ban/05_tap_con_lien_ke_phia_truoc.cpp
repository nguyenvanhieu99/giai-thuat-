#include<iostream>

using namespace std;
int t,n;
int a[10000];
void sinh(){
	int i=n;
	while(i>0&&a[i]==(a[i-1]+1)){
		i--;
	}
	
	if(i>0&&a[i]!=1){
		a[i]=a[i]-1;
		int j=n;
		int term=0;
		for( j =n ;j>i;j--){
			a[j]=t-term;
			term++;
		}
	}else{
		int term=0;
		for(int j=n;j>=1;j--){
			a[j]=t-term;
			term++;
		}
	}
}
void out(){

	for(int i=1;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<a[n]<<endl;
}
int main(){
	int bo;cin>>bo;
	while(bo--){
		
		cin>>t>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		sinh();
		out();

	}

	return 0;
}
