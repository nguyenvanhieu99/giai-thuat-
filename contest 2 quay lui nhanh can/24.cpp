#include<iostream>
#include<algorithm>
using namespace std;
int n,k,s,a[15]={0},x[15]={0};
bool check=true;
void out(int t){
	int term=n;
	while(term){
	 if(x[term]==1) break;
	 term=term-1;
	}
	cout<<"[";
	for(int i=0;i<term;i++ ){
		if(x[i]) cout<<a[i]<<" ";
	}
	cout<<a[term]<<"] ";
}
void trackback(int i){
	
	for(int j=1;j>=0;--j){
		
		x[i]=j;
		s=s+a[i]*x[i];
		
			if(i<n-1&&s<=k) trackback(i+1);
			else if(s==k){
				out(i);
				check=false;
			}
			s=s-x[i]*a[i];
	}
}
int main(){
	int bo;cin>>bo;
	while(bo--){
		s=0;check=true;
		cin>>n>>k;
		for(int i=0;i<n;++i){
			cin>>a[i];
			x[i]=0;
		}
		sort(a,a+n);
		trackback(0);
		if(check) cout<<"-1";
		cout<<endl;
		
	}

	return 0;
}

