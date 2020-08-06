#include<iostream>

using namespace std;
bool ok=true;
int n,a[20]={0},b[20]={0};
void sinh(){
	
	int i=n;
	while(a[i]==1){
		a[i]=0;
		i--;
	}
	if(i>0){
		a[i]=1;
	}
	else ok=false;
	b[1]=a[1];
	for(int i=2;i<=n;++i){
		b[i]=a[i]^a[i-1];
//		if(a[i]==a[i-1]) b[i]=0;
//		else b[i]=1;
	}
	
}
void out(){
	for(int i=1;i<=n;++i){
		cout<<b[i];
	}
cout<<" "; 
}
int main(){
	int  bo ;cin>>bo;
	while(bo--){
		cin>>n;
		while(ok){
			out()		;
		sinh();
		}
		cout<<endl;
		ok=true;
	}

	return 0;
}

