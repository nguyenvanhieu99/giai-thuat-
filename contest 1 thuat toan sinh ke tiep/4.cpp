//bai 4
#include<iostream>

using namespace std;
int n ,a[100]={0};
bool ok=true;
void next(){
	int i=n;
//	for(i=n;i>0;--i){
//		if(a[i]=1) a[i]=0;
//		else{
//			a[i]=1;
//			break;
//		}
//		
//	}
	while(i>0&&a[i]==1) {
		a[i]=0;
		i--;
	}	
	if(i>0) a[i]=1;
	else ok=false;
}
void out(){
	for(int i=1;i<=n;++i){
		if(a[i]==1)cout<<"B";
		else cout<<"A";
	}
	cout<<" ";
}
int main(){
	int bo;
	cin>>bo;
	while(bo--){
		cin>>n;

		while(ok){
			out();
			next();
			
		}
		cout<<endl;
		ok=true;
	}

	return 0;
}

