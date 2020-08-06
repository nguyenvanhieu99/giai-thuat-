#include<iostream>

using namespace std;
int n,a[150],dau[150]={0},b[100000]={0},x[150]={0},s=0;
bool check=false;
void trackback(int i){
	
	if(check) return;
	
	for(int j=x[i-1]+1;j<=n;j++){	
		
		x[i]=j;
		
		s=s+a[x[i]];
		
		b[s]=1;
		if(b[s]==1) {
			check=true;
		}
		else{
			b[s]=1;
			trackback(i+1);	
			
		} 
		s=s-a[x[i]];
		b[s]=0;
	}
}
int main(){
	int bo;
	cin>>bo;
	while(bo--) {
		cin>>n;
		s=0;
		check=false;
		for(int i=1;i<=n;++i){
			cin>>a[i];
		}
		trackback(1);
		if(check) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}

	return 0;
}

