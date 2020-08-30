#include<iostream>

using namespace std;
int n,k;
int a[1000],b[1000];
bool ok=true;
void out(){
	for(int i=1;i<=k;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void sinh(){
    int i=k;
	while(i>0&&a[i]==n-k+i){
		i--;
	}
	if(i>0){
		a[i]=a[i]+1;
		for(int j=i+1;j<=k;j++){
			a[j]=a[j-1]+1;
		}
	}else{
		for(int i=1;i<=k;i++) a[i]=i;
	}
	out();
}
int main(){
    int bo;cin>>bo;
	while(bo--){
		cin>>n>>k;
		for(int i=1;i<=k;i++){
			cin>>a[i];
		}
		sinh();
	}
           
	return 0;
}
