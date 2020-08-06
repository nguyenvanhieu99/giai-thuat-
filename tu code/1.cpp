//xau nhi phan co k bit mot 
//sd trackback s
#include<iostream>

using namespace std;
int x[100],s,n,i=0,k;
void out(){
	for(int i=0;i<n+1;++i){
		cout<<x[i];
	}
	cout<<"\n";
}
void trackback(int i){
	for(int j=1;j>=0;++j){
		x[i]=j;
		s=s+j;
		if(i<n-1&&s<=k) trackback(i+1);
		else if(s==k) out();
		s=s-j;
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

