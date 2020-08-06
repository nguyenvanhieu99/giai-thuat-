//xau nhi phan co k bit mot 
//sd trackback s
#include<iostream>

using namespace std;
int x[100],s,n,i=0,k,term=0,max1=0,dem=0;
int  sol=0;
void out(){
	for(int i=0;i<n;++i){
		
		if(x[i]==1) cout<<"A";
		else cout<<"B";
		
	}
	cout<<"\n";
}
bool check(){
	for(int u=0;u<n;++u){
		
		if(x[u]==1){
			dem++;
			if(dem>=k) sol++;
		}
		else{
			dem=0;
		}
		if(sol>=2){
			dem=0;
			sol=0;
			return false;
		} 
	}
	dem=0;
	if(sol==1) {
		sol=0;
		return true;
	}
		sol=0;
	return false;
}
void trackback(int i){
	for(int j=1;j>=0;--j){
		
		x[i]=j;
		
		if(i<n-1) trackback(i+1);
		else if(check()==true) out();
	
		
	}
}
int main(){
	
	int t;
	cin>>t;
	while(t--){
		
		cin>>n>>k;
		
		trackback(0);
	} 
	
	return 0;
}

