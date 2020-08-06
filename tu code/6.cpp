//bai 6:Xap xep n quan hau 
#include<iostream>

using namespace std;
int n,term=13;
int res[20],dem=0;
bool check[40],xuo[50],ng[50];
void init(){
	//cin>>n;
	n=term;
//	for(int i=1;i<=n;++i){
//		check[i]=true;
//	}
//	for(int i=2;i<=2*n;++i){
//		ng[i]=true;
//	} 
//	for(int i=1-n;i<=n-1;++i){
//		xuo[i]=true;
//	} 
for(int i=1;i<=30;++i){
		check[i]=true;
		ng[i]=true;
		xuo[i]=true;
	}
}
void out(){
	for(int i=0;i<n;++i){
		cout<<res[i]<<"  ";
	}
	cout<<"\n";
}
void trackback(int i){
	for(int j=1;j<=n;++j){
		if(check[j]&&ng[i+j]&&xuo[i-j+n]){
		res[i]=j;
		check[j]=false;
		ng[i+j]=false;
		xuo[i-j+n]=false;
		if(i<n) trackback(i+1);
		else  dem++;

		check[j]=true;
		ng[i+j]=true;
		xuo[i-j+n]=true;
		}
	}
}
int main(){
	
	while(term--){
	init();
	trackback(1);
	cout<<dem<<"  ";
	dem=0;
    }
	return 0;
}

