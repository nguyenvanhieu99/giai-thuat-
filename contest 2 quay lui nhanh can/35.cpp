#include<iostream>


using namespace std;

int n,k,s,t=0,x[100]={0};
int dem=0;
void out(){
	for(int i=1;i<=k;i++){
		cout<<x[i]<<" ";
	}
	cout<<endl;
}
void trackback(int i){
	for(int j=x[i-1]+1;j<=n-k+i;j++){
		x[i]=j;
		t=t+x[i];
		if(i==k){
			if(t==s) dem++;
		} 
		else trackback(i+1);
	
		t=t-x[i];
		
	}
}
int main(){
	while(true){
		cin>>n>>k>>s;
		if(n==0||k==0||s==0)break;
		dem=0;
		trackback(1);
		cout<<dem<<endl;
	}

	return 0;
}

