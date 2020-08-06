//sinh to hop
#include<iostream>

using namespace std;
int n,k,a[20];
bool ok=true;
void sinh(){
	int i=k;
	while(i>0&&a[i]==(n-k+i))i--;
	//cout<<"\n***"<<a[i]<<"  "<<i<<endl;
	if(i>0){
		++a[i];
		for(int j=i+1;j<=k;++j){
			a[j]=a[j-1]+1;
		}
	}else{
		ok=false;
	}
}
void out(){
	for(int i=1;i<=k;++i){
		cout<<a[i];
	}
	cout<<" ";
}
int main(){
	int bo;
	cin>>bo;
	while(bo--){
		cin>>n>>k;
		for(int i=1;i<=n;++i){
			a[i]=i;
		}
		while(ok){
			//cout<<"asfsd"<<endl;
			out();
			sinh();
			
		}
		ok =true;
		cout<<endl;
		
	}

	return 0;
}

