//tap quan su
#include<iostream>

using namespace std;
int n,k,a[41]={0},res=0,term[41]={0};
bool ok=true;
void sinh(){
	int i=k;
	while(a[i]==(n-k+i)) i--;
	if(i>0){
	a[i]++;
	int dx=0;
	for(int j=i+1;j<=k;++j){
		dx++;
		a[j]=dx;
	}
	}else ok=false;
}

int main(){
	int bo;
	cin>>bo;
	while(bo--){
		cin>>n>>k;
		for(int i=1;i<=n;++i){
			term[i]=0;
		}
		for(int i=1;i<=k;++i){
			cin>>a[i];
			term[a[i]]=1;
		}
		//for(int i=1;i<=n;i++){
			
	    	while(ok){
				sinh();
				for(int i=1;i<=k;++i){
					cout<<a[i]<<" ";
				}
				cout<<endl;
    		}
    	//}
	}

	return 0;
}

