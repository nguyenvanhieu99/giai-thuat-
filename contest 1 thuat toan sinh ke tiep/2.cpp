//SINH TAP CON KE TIEP 
#include<iostream>

using namespace std;
int n,k;
int a[1000]={0};
void next(){
	int i=k;
	while(i>0&&a[i]==(n+i-k))i--;
	//cout<<i<<endl;
	if(i>0) {
		++a[i];
		//cout<<a[i]<<endl;
		for(int j=i+1;j<=k;++j){
			
			a[j]=a[j-1]+1;
		//	cout<<a[j]<<endl;
		}
	}else {
			for(int j=1;j<=k;++j){
			a[j]=j;
		}
	}
}
void out(){
		for(int j=1;j<=k;++j){
			cout<<a[j]<<" ";
		}
		cout<<endl;
}
int main(){
	int bo;
	cin>>bo;
	while(bo--){
		cin>>n>>k;
		for(int i=1;i<=k;i++){
			cin>>a[i];
		}
		next();
		out();
	}
	return 0;
}

