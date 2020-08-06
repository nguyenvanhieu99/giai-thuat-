//ma tran xoay oc fibonacci
#include<iostream>

using namespace std;
int n;
int re[50][50];
int ma[50];

void sfibo(int fi[]){
	int sol=n*n;
	ma[0]=1;
	ma[1]=1;
	int i=2;
	while(i<=(sol+1)){
		//cout<<ma[i-1]<<" "<<ma[i-2];
		
		int tong=ma[i-1]+ma[i-2];
		ma[i]=tong;
		++i;
		//cout<<tong<<endl;
	}
	
}
void xoayoc(int fi[]){
	int sol=n*n;
	int d=1,t=n;
	int dem=0;
	while(dem<=(sol-1) ){
		//cout<<fi[dem]<<endl;
		for(int i=d;i<=t;i++){
			
			re[d][i] =ma[dem];
			cout<<dem<<"  "<<re[d][i]<<endl;
			dem++;
		}
		
		for(int i=d+1;i<=t;++i){
			re[i][t]=ma[dem++];
		}
		
		for(int i=t-1;i>=d;i--){
			re[t][i]=ma[dem++];
		}
		
		for(int i=t-1;i>=d+1;i--){
			re[i][d]=ma[dem++];
		}
		
		d++;t--;
	}
}
void out(){
	for(int i=1;i<=n;++i){
		for(int j=1;j<=n;++j){
			cout<<re[i][j]<<" ";
			
		}
		cout<<endl;
	}
}
int main(){
	int bo;
	cin>>bo;
	int so=0;
	while(bo--) {
		cin>>n;
		int fibo[n];
		so++;
		cout<<"Text "<<so<<":"<<endl;
		sfibo(fibo);
		xoayoc(fibo);
		out();
		
	}

	return 0;
}

