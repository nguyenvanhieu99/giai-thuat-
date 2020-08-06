//tap quan su
#include<iostream>

using namespace std;
int n,k,a[41]={0},res=0,term[41]={0};

void sinh(){
	int i=k;
	while(a[i]==(n-k+i)) i--;
	if(i>0){
	a[i]++;
	if(term[a[i]]==1) ;
	else res++;
	for(int j=i+1;j<=k;++j){
		a[j]=a[j-1]+1;
		if(term[a[j]]==1) ;
	    else res++;
	}
	}else res=k;
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
	//	cout<<"+++";
		sinh();
//		for(int i=1;i<=k;++i){
//			cout<<a[i];
//		}
		cout<<res<<endl;
		res=0;
	}

	return 0;
}

